//
// Created by maxGr on 07.01.2023.
//
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

// Template für
template <typename T>
T isMaxof2 (T first, T second){
    return ((first > second) ? first : second);
}

// Nach Datentyp optimierte Templates
template <typename T>
string convert_to_string(T t) {
    ostringstream ss;
    ss << t;
    return ss.str();
}

struct person {
        int id;
        string Name;
        person(int nr, string n) : id(nr), Name(n){};
    };

template <>
string convert_to_string<person>(person t){
    ostringstream ss;
    ss << "Person: " << t.Name;
    return ss.str();
}


int main(){

    // Generische Funktionen
    float f1 = 9.9F;
    float f2 = 11.11F;
    cout << setprecision(3) << "\nMaximum: " << isMaxof2(f1,f2) << endl;

    // Spezialisierung
    // Nach Datentyp optimierte Templates
    int num = 1;
    person p1(1, "Horst");
    cout << convert_to_string(num) << endl;
    cout << convert_to_string(p1) << endl;

    return 0;
}