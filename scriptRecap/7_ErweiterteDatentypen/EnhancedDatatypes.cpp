//
// Created by maxGr on 28.12.2022.
//

#include <iostream>
#include <string>

using namespace std;

typedef std::string definitiv_kein_string;

#ifdef _W64
typedef unsigned __int64 size_t;
#else
typedef unsigned int size_t;
#endif

class CAuto {
private:
    int i_baujahr;
    int i_Insassen;
    string s_kennZ;
public:
    CAuto() {
        cout << "Aufruf Konstruktor CAuto" << endl;
        i_Insassen = 0;
    }

    CAuto(int mitfahrer);
    CAuto(string kennzeichen);
    CAuto(int mitfahrer, string kennzeichen);

    void einsteigen(int i_Mitfahrer) {
        i_Insassen += i_Mitfahrer;
    }

    int getBaujahr(){
        return i_baujahr;
    }

    int getInsassen() {
        return i_Insassen;
    }

    string getKennzeichen(){
        return s_kennZ;
    }
};

CAuto::CAuto(int mitfahrer) {
    i_Insassen = mitfahrer;
    i_baujahr = 0;
    s_kennZ = "Kein Kennzeichen";
}

CAuto::CAuto(string kennzeichen) : s_kennZ(kennzeichen) {
    i_Insassen = 100;
    i_baujahr = 1899;
}

CAuto::CAuto(int mitfahrer, string kennzeichen) : i_Insassen(mitfahrer), s_kennZ(kennzeichen) {
    return;
}



int main() {
    definitiv_kein_string gString = "Schoener String!";
    cout << gString << endl;
    //-----------------------------------------------------//
    CAuto golf3;
    golf3.einsteigen(5);
    cout << "Mitfahrer im Golf: " << golf3.getInsassen() << endl;
    CAuto audiA3 = {10};
    cout << "Mitfahrer im Audi: " << audiA3.getInsassen() << endl;
    //-----------------------------------------------------//
    CAuto blablaCar = {"blabla-Kennzeichen"};
    CAuto fordFord = {2, "Das ist ein Ford ford"};
    cout << blablaCar.getInsassen() << " :: " << blablaCar.getKennzeichen();
    return 0;
}
