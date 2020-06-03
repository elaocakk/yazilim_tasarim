#include <iostream>
#include <vector>

using namespace std;

class Handler {
public:
    virtual Handler *setSonraki(Handler *handler) = 0;
    virtual string Onaylama(string durum) = 0;
};

class AbstractHandler : public Handler {
private:
    Handler *sonraki_handler;

public:
    AbstractHandler(){
        this->sonraki_handler = nullptr;
    }

    Handler *setSonraki(Handler *handler) override {
        this->sonraki_handler = handler;
        return handler;
    }

    string Onaylama(string durum) override { 
        if (this->sonraki_handler) {
            return this->sonraki_handler->Onaylama(durum);
        }
        return NULL;
    }
};

class BolumSekreteri : public AbstractHandler { 
public:
    string Onaylama(string durum) {
        if (durum == "sekreterOnaylayabilir") {
            return "Bolum sekreteri dilekceyi onayladi";
        } else {
            return AbstractHandler::Onaylama(durum);
        }
    }
};

class OgrenciIsleri : public AbstractHandler {
public:
    string Onaylama(string durum) {
        if (durum == "ogrIsleriOnaylayabilir") {
            return "Ogrenci isleri dilekceyi onayladi";
        } else {
            return AbstractHandler::Onaylama(durum);
        }
    }
};

class YonetimKurulu : public AbstractHandler {
public:
    string Onaylama(string durum) {
        if (durum == "kurulOnaylayabilir") {
            return "Yonetim kurulu dilekceyi onayladi";
        } else {
            return AbstractHandler::Onaylama(durum);
        }
    }
};

class Ogrenci { 
public:
    void dilekceKontrol (Handler &handler) {
        vector<string> dilekceDurum = {"sekreterOnaylayabilir", "ogrIsleriOnaylayabilir","kurulOnaylayabilir"};

        for (const string &f : dilekceDurum) {
            string sonuc = handler.Onaylama(f);
            cout << "Dilekce onay sonucu: ";
            if (!sonuc.empty()) {
                cout << "  " << sonuc ;
            } else {
                cout << " Onaylanamadi ";
            }
            cout << "\n";
        }
    }
};

int main() {

    BolumSekreteri *bsekreteri = new BolumSekreteri;
    OgrenciIsleri *oisleri = new OgrenciIsleri;
    YonetimKurulu *ykurulu = new YonetimKurulu;

    bsekreteri->setSonraki(oisleri);
    oisleri->setSonraki(ykurulu);

    cout << "Zincir: BolumSekreteri > OgrenciIsleri > YonetimKurulu \n\n";

    Ogrenci *ogrenci = new Ogrenci;

    ogrenci->dilekceKontrol(*bsekreteri);
    cout << "\n";

    delete bsekreteri;
    delete oisleri;
    delete ykurulu;

    return 0;
}