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

    int getBaujahr() {
        return i_baujahr;
    }

    int getInsassen() {
        return i_Insassen;
    }

    string getKennzeichen() {
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

CAuto::CAuto(int mitfahrer, string kennzeichen) : i_Insassen(mitfahrer), s_kennZ(std::move(kennzeichen)) {
}

union {
    long int var1;
    char var2[4];
} my_Union;

enum {
    GRUEN = 10, BLAU, ROT = 30
} farbe;

typedef enum {
    ZEHN = 10, FUENF = 5, EINS = 1
} windstaerke;

// Beispiel Skript Müller F. 75
typedef enum {
    FALSE, TRUE
} TBool;

void printWahrscheinlichkeit(TBool val);


int main() {
    // Typdefs
    definitiv_kein_string gString = "Schoener String!";
    cout << gString << endl;
    //-----------------------------------------------------//
    // Spass mit Konstruktoren
    CAuto golf3;
    golf3.einsteigen(5);
    cout << "Mitfahrer im Golf: " << golf3.getInsassen() << endl;
    CAuto audiA3 = {10};
    cout << "Mitfahrer im Audi: " << audiA3.getInsassen() << endl;
    //-----------------------------------------------------//
    CAuto blablaCar = {"blabla-Kennzeichen"};
    CAuto fordFord = {2, "Das ist ein Ford ford"};
    cout << blablaCar.getInsassen() << " :: " << blablaCar.getKennzeichen();
    //-----------------------------------------------------//
    // Unions
    my_Union.var1 = 1;
    for (int i = 0; i < 4; i++) {
        ::printf("%d. Byte: %x Adresse: %p\n", i, my_Union.var2[i], &(my_Union.var2[i]));
    }
    // WTF ist bitte dieses Beispiel?
    //-----------------------------------------------------//
    // Enums
    cout << "Zugriff auf anonymen enum: " << endl;
    farbe = GRUEN;
    cout << farbe << endl;
    farbe = BLAU;
    cout << farbe << endl;
    farbe = ROT;
    cout << farbe << endl;
    cout << "Zugriff auf typef enum: " << endl;
    cout << windstaerke{ZEHN} << " :: " << windstaerke{EINS} << endl;
    //-----------------------------------------------------//
    // Enums Müller Beispiel
    TBool a,b;
    a = TRUE;
    b = FALSE;

    cout << "\n wenn        a = ";
    printWahrscheinlichkeit(a);
    cout << "\n wenn        b = ";
    printWahrscheinlichkeit(b);
    cout << "\n dann gilt        a&&b = ";
    printWahrscheinlichkeit(static_cast<TBool>(a && b));
    cout << "\n dann gilt        a||b = ";
    printWahrscheinlichkeit(static_cast<TBool>(a || b));

    return 0;
}

void printWahrscheinlichkeit(TBool val) {
    switch (val) {
        case TRUE:
            ::printf("TRUE");
            break;
        case FALSE:
            ::printf("FALSE");
            break;
    }
    return;
}