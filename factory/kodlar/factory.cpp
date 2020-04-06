#include <iostream> 
#include <stdio.h> 

using namespace std; 
  
enum CanliTur { 
    Bitki, 
    Hayvan,
    Mantar,
    Mikroskobik
}; 

class Canli { 
public: 
    virtual void solunum()  = 0;
    virtual void beslenme()  = 0;
    virtual void buyume()  = 0;
    virtual void hareket()  = 0;

    static Canli* canliOlustur(CanliTur type); 
}; 

class Bitkiler : public Canli { 
private:
    string hucre_ceperi;
    string klorofil;
    string kloroplast;

    void fotosentez() {
        cout << "Bitki fotosentez yapti" << endl;
    }

public: 
    Bitkiler() { };
    ~Bitkiler();

    void solunum() {
        cout << "Bitki solunum yapti" << endl;
    }
    void beslenme() {
        cout << "Bitki beslendi" << endl;
    }
    void buyume() {
        cout << "Bitki büyüdü" << endl;   
    }
    void hareket() {
    cout << "Bitki pasif hareket etti" << endl;
    }

}; 

class Hayvanlar : public Canli { 
private:
    string iskelet;
      
public:
    Hayvanlar() { };
    ~Hayvanlar();

    void solunum() {
        cout << "Hayvan solunum yapti" << endl;
    }
    void beslenme() {
        cout << "Hayvan beslendi" << endl;
    }
    void buyume() {
        cout << "Hayvan büyüdü" << endl;   
    }
    void hareket() {
    cout << "Hayvan aktif hareket etti" << endl;
    }

}; 

class Mantarlar : public Canli { 
private:
    string hucre_ceperi;
    
public:
    Mantarlar() { };
    ~Mantarlar();

    void solunum() {
        cout << "Mantar solunum yapti" << endl;
    }
    void beslenme() {
        cout << "Mantar beslendi" << endl;
    }
    void buyume() {
        cout << "Mantar büyüdü" << endl;   
    }
    void hareket() {
    cout << "Mantar pasif hareket etti" << endl;
    }

}; 

class MikroskobikCanlilar : public Canli { 
private:
    string tek_hucreli_yapi;
      
public:
    MikroskobikCanlilar() { };
    ~MikroskobikCanlilar();
    
    void solunum() {
        cout << "Mikroskobik canli solunum yapti" << endl;
    }
    void beslenme() {
        cout << "Mikroskobik canli beslendi" << endl;
    }
    void buyume() {
        cout << "Mikroskobik canli büyüdü" << endl;   
    }
    void hareket() {
    cout << "Mikroskobik canli aktif hareket etti" << endl;
    }

};

Canli* Canli::canliOlustur(CanliTur type) { 
    if (type == Bitki) {
        return new Bitkiler() ;   
    }
    else if (type == Hayvan) {
         return new Hayvanlar() ;
    }
    else if (type == Mantar) {
         return new Mantarlar() ;
    }
    else if (type == Mikroskobik) {
         return new MikroskobikCanlilar() ;
    }
    else {
         return NULL; 
    }

} 

class Ornek {
    private: 
        Canli *canliOrnek; 

    public: 
    /* 
        Ornek() 
        { 
            CanliTur tur = Hayvan; 
            cout<<"Ornek(): "<<tur<<endl;
            canliOrnek = Canli::canliOlustur(tur); 
        }
    */ 
        Ornek(CanliTur t) 
        { 
            CanliTur tur = t;
            canliOrnek = Canli::canliOlustur(tur); 
        } 

        ~Ornek() { 
            if (canliOrnek) { 
                delete[] canliOrnek; 
                canliOrnek = NULL; 
            } 
        } 

        Canli* getOrnek()  { 
            return canliOrnek; 
        } 
}; 
 
int main() { 

    Ornek *ornek1 = new Ornek(Bitki); 
    Canli *canli1 = ornek1->getOrnek(); 
    canli1->solunum();
    canli1->beslenme();
    canli1->buyume();
    canli1->hareket();

    Ornek *ornek2 = new Ornek(Hayvan); 
    Canli *canli2 = ornek2->getOrnek(); 
    canli2->solunum();
    canli2->beslenme();
    canli2->buyume();
    canli2->hareket();

    Ornek *ornek3 = new Ornek(Mantar); 
    Canli *canli3 = ornek3->getOrnek(); 
    canli3->solunum();
    canli3->beslenme();
    canli3->buyume();
    canli3->hareket();

    Ornek *ornek4 = new Ornek(Mikroskobik); 
    Canli *canli4 = ornek4->getOrnek(); 
    canli4->solunum();
    canli4->beslenme();
    canli4->buyume();
    canli4->hareket();

    /*

    int secenek;
    CanliTur tur;
    while (1) {
        cout << "Ornek bir tur giriniz (0:Bitki, 1:Hayvan, 2:Mantar, 3:Mikroskobik)" << endl;
        cin >> secenek;

        if (secenek == 0) {
            tur=Bitki;
        } else if (secenek == 1) {
            tur=Hayvan;
        } else if (secenek == 2) {
            tur=Mantar;
        } else if (secenek == 3) {
            tur=Mikroskobik;
        } else {
            cout << "0:Bitki, 1:Hayvan, 2:Mantar, 3:Mikroskobik" << endl;
            cout << "Yukarıdaki numaralardan birini deneyiniz" << endl;
            break;
        }

        cout<<tur<<endl;

        Ornek *ornek2 = new Ornek(tur); 
        Canli *canli2 = ornek1->getOrnek(); 

        canli2->solunum();
        canli2->beslenme();
        canli2->buyume();
        canli2->hareket();

    }
    */

    return 0; 
} 

