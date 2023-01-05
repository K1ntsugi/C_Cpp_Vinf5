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
	
	// Unterschied Zeigervariable vs. Referenzvariable
	// Zeigervariable = Variable deren Speicheradresse im Pointer gespeichert wird
	// Referenzvariable = Permanente Referenz als Alias zu einer anderen Variable
	




    return 0;
}
