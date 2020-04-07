#include <iostream>       // std::cout

using namespace std;

class Canlilar {
private:
      static Canlilar *ornek;
      string tur;
      string isim;

    Canlilar(){
        tur="Bitki";
        isim="Papatya";
    };
    ~Canlilar(){   };
    
public:
      static Canlilar *getCanlilarOrnek()
      {
            if (ornek == NULL) // if not yet instantiated
            {
                  ornek = new Canlilar();
            }
            return ornek;
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

Canlilar* Canlilar::ornek = NULL;

int main()
{
    Canlilar *singl1 = Canlilar::getCanlilarOrnek();
    Canlilar *singl2 = Canlilar::getCanlilarOrnek();

    cout << "singl1 instance :" << endl;
    cout << singl1->getTur() << endl;
    cout << singl1->getIsim() << endl;

    cout << "singl2 instance :" << endl;
    cout << singl2->getTur() << endl;
    cout << singl2->getIsim() << endl;
    
    singl1->setTur("Hayvan");
    singl1->setIsim("Balık");
   
    cout <<  endl;
    cout << "singl1 instance :" << endl;
    cout << singl1->getTur() << endl;
    cout << singl1->getIsim() << endl;
   
    cout << "singl2 instance :" << endl;
    cout << singl2->getTur() << endl;
    cout << singl2->getIsim() << endl;

}




