#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <mutex>          // std::mutex

using namespace std;

class Canlilar {
    private:
        static Canlilar *ornCanlilar ;
        string tur;
        string isim;

        Canlilar(){
            tur="Bitki";
            isim="Papatya";
        };

public:
    static Canlilar *getCanlilarOrnek() { 
        //static Canlilar *ornCanlilar; 
        static mutex creation_mutex;

        if (ornCanlilar == NULL)
        {
            creation_mutex.lock();

            if(ornCanlilar == NULL) {
                ornCanlilar = new Canlilar();
            }
            creation_mutex.unlock();
        }  
        return ornCanlilar;
    }

    string getIsim(){
            return this->isim;
        }

    void setIsim(string i){
        isim=i;
    }

    string getTur() {
        return this->tur;
    }

    void setTur(string t){
        tur=t;
        }

};

Canlilar* Canlilar::ornCanlilar = nullptr;

int main()
{
	Canlilar *s1 = Canlilar::getCanlilarOrnek();
	Canlilar *s2 = Canlilar::getCanlilarOrnek();

    cout << "s1 instance :" << endl;
    cout << s1->getTur() << endl;
    cout << s1->getIsim() << endl;

    cout << "s2 instance :" << endl;
    cout << s2->getTur() << endl;
    cout << s2->getIsim() << endl;
  

    s1->setTur("Hayvan");
    s1->setIsim("Köpek");
   
    cout <<  endl;
    cout << "s1 instance :" << endl;
    cout << s1->getTur() << endl;
    cout << s1->getIsim() << endl;
   
    cout << "s2 instance :" << endl;
    cout << s2->getTur() << endl;
    cout << s2->getIsim() << endl;

	return 0;
}