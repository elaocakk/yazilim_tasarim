#include <iostream>
#include <string>

using namespace  std;

class Formul {
public:
    virtual void cevreFormul() = 0;
    virtual void alanFormul()= 0;
};

class Kare : Formul {
public:
    Kare() {};
    void cevreFormul() override {
        cout << "Karenin bir kenarinin uzunlugu a olmak uzere, " << endl;
        cout << ("Kare cevre: 4 x (a)") << endl;
    }
    void alanFormul() override {
        cout << "Karenin bir kenarinin uzunlugu a olmak uzere, " << endl;
        cout << ("Kare alan: (a x a)") << endl;
    }
};

class Dikdortgen : Formul {
public:
    Dikdortgen() {};
    void cevreFormul() override {
        cout << "Dikdortgenin bir uzun kenarinin uzunlugu a, kisa kenarinin uzunluğu b olmak uzere, " << endl;
        cout << ("Dikdortgen cevre: 2 x (a + b)") << endl;
    }
    void alanFormul() override {
        cout << "Dikdortgenin bir uzun kenarinin uzunlugu a, kisa kenarinin uzunluğu b olmak uzere, " << endl;
        cout << ("Dikdortgen alan: (a x b)") << endl;
    }
};

class Paralelkenar : Formul {
public:
    Paralelkenar() {};
    void cevreFormul() override {
        cout << "Paralelkenarin taban uzunlugu b ve yan kenar uzunlugu a olmak uzere," << endl;
        cout << ("Paralelkenar cevre: 2 x (a + b)") << endl;
    }
    void alanFormul() override {
        cout << "Paralelkenarin taban uzunlugu b, yuksekligi olmak uzere, " << endl;
        cout << ("Paralelkenar alan: (b x h)") << endl;
    }
};

class Daire {
public:
    Daire() {};
    void daireCevre() {
        cout << "Dairenin yaricapinin uzunlugu r olmak uzere, " << endl;
        cout << ("Daire cevre: 2 x π x r ") << endl;
    }
    void daireAlan() {
        cout << "Dairenin yaricapinin uzunlugu r olmak uzere, " << endl;
        cout << ("Daire alan: π x (r x r)") << endl;
    }
};

class DaireAdapter : Formul {
private:
    Daire daire;
public:
    DaireAdapter(Daire daire){
        this->daire = daire;
    }
    void cevreFormul() override {
        daire.daireCevre();
    }
    void alanFormul() override {
        daire.daireAlan();
    }
};

int main() {
    Kare kare = *new Kare();
    kare.cevreFormul();
    kare.alanFormul();
    cout << ("-------------") << endl;

    Dikdortgen dikdortgen = *new Dikdortgen;
    dikdortgen.cevreFormul();
    dikdortgen.alanFormul();
    cout << ("-------------") << endl;

    Paralelkenar paralelkenar = *new Paralelkenar;
    paralelkenar.cevreFormul();
    paralelkenar.alanFormul();
    cout << ("-------------") << endl;

    Daire daire = *new Daire;

    DaireAdapter daireAdapter = *new DaireAdapter(daire);
    daireAdapter.cevreFormul();
    daireAdapter.alanFormul();
    cout << ("-------------") << endl;

    return 0;
}