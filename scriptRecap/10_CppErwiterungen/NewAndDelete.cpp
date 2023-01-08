//
// Created by maxGr on 07.01.2023.
//
#include <iostream>

using namespace std;

int main() {

    int nr;
    cout << "Integer einlesen: ";
    cin >> nr;

    // new() Operator liefert Pointer auf angeforderten speicherplatz zurück.
    int * ptr = new int[nr];
    // hier wurde ein array von der größe der eingelesenen Zahl angefordert

    for(int i = 0; i < nr; i++){
        ptr[i] = i;
        cout << *(ptr + i) << endl;
    }

    // Um Speicherplatz freizugeben benötigt der delete() Operator den Pointer auf den freizugebenden Speicherplatz
    delete[] ptr;

    return 0;
}