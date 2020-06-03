#include <iostream>
using namespace std;

class Kitaplar {
private:
    static Kitaplar *kitapOrnek;
    string isim;
    string kategori;
    string yazar;

    Kitaplar(){
        isim="Tutunamayanlar";
        kategori="Roman";
        yazar="Oguz Atay";
    }

private:;
    ~Kitaplar(){   };

public:
    static Kitaplar *getKitaplarOrnek()
    {
        if (kitapOrnek == NULL) 
        {
            kitapOrnek = new Kitaplar();
        }
        return kitapOrnek;
    }

    string getIsim(){
        return this->isim;
    }

    void setIsim(string i){
        isim=i;
    }
    string getKategori()  {
        return this->kategori;
    }

    void setKategori( string k) {
        kategori = k;
    }

    string getYazar()  {
        return yazar;
    }

    void setYazar(string y) {
        yazar = y;
    }

};

Kitaplar* Kitaplar::kitapOrnek = NULL;

int main()
{
    Kitaplar *singl1 = Kitaplar::getKitaplarOrnek();
    Kitaplar *singl2 = Kitaplar::getKitaplarOrnek();

    cout << "singleton1 instance :" << endl;
    cout << singl1->getIsim() << endl;
    cout << singl1->getYazar() << endl;
    cout << singl1->getKategori() << endl;

    cout << "singleton2 instance :" << endl;
    cout << singl2->getIsim() << endl;
    cout << singl2->getYazar() << endl;
    cout << singl2->getKategori() << endl;

    singl1->setIsim("Dönüsüm");
    singl1->setYazar("Franz Kafka");
    singl1->setKategori("Hikaye");

    cout <<  endl;
    cout << "singleton1 instance :" << endl;
    cout << singl1->getIsim() << endl;
    cout << singl1->getYazar() << endl;
    cout << singl1->getKategori() << endl;

    cout << "singl2 instance :" << endl;
    cout << singl2->getIsim() << endl;
    cout << singl2->getYazar() << endl;
    cout << singl2->getKategori() << endl;

}