//
// Created by maxGr on 05.01.2023.
//

#include <iostream>

using namespace std;

int main() {
    // Einführungsbeispiel
    int var = 5;
    int *ptr = &var;
    cout << "\Speicheradresse von var: " << ptr << endl;
    cout << "Speicheradresse von ptr: " << &ptr << endl;
    cout << "Wert von var, auf die der ptr zeigt: " << *ptr << endl;

    return 0;
}