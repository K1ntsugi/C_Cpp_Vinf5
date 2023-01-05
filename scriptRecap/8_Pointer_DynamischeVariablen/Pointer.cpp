//
// Created by maxGr on 05.01.2023.
//

#include <iostream>
#include <string>

#define DIM 3

using namespace std;


void mySwap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void addOne(int length, int arr[]) {
    for (int i = 0; i < length; i++) arr[i]++;
}

int main() {
    // Einführungsbeispiel
    int var = 5;
    int *ptr0 = &var;
    cout << "\nSpeicheradresse von var: " << ptr0 << endl;
    cout << "Speicheradresse von ptr: " << &ptr0 << endl;
    cout << "Wert von var, auf die der ptr zeigt: " << *ptr0 << endl;

    // Unterschied Zeigervariable vs. Referenzvariable
    // Zeigervariable = Variable deren Speicheradresse im Pointer gespeichert wird
    // Referenzvariable = Permanente Referenz als Alias zu einer anderen Variable
    int rVal = 42;
    int &refToVal = rVal;
    cout << refToVal << endl; // 42

    // Zeiger und const
    // Beispiel 1:
    unsigned char *ucptr = reinterpret_cast<unsigned char *>(0x1000ULL);
    string cppstr = {"Hallo C++-String"};
    char cstr[] = {"Hallo C-String"};
    const char *cptr = cstr; // &cstr[0]
    const auto MEMSTART = 0x1000ULL;
    const unsigned long long *pMem = reinterpret_cast<const unsigned long long *>(MEMSTART);

    printf("Adresse von cppstr = %p\n", &cppstr);
    cout << "Inhalt von cstr" << cppstr << endl;
    printf("Adresse von cstr = %p\n");
    cout << "Inhalt von cstr: " << cptr << endl;
    printf("Inhalt von ucptr = %p\n", ucptr);
    printf("Inhalt von pMem = %p\n", pMem);

    // Beispiel 2:
    int Wert1 = 110, Wert2 = 112;
    int const *p1 = &Wert1;
    int *const p2 = &Wert1;
    int const *const p3 = &Wert1; // Fehler in Bsp 2 auf S.88?
    p1 = &Wert2;
    // Geht nicht: *p1 = Wert2;
    *p2 = Wert2;
    // Geht nicht: p2 = &Wert2
    // Geht nicht p3 = &Wert2;
    // Geht nicht: *p3 = Wert2;

    // Übergabe von Pointern an Funktionen:
    int x = 0, y = 1;
    cout << "x = " << x << "; y = " << y << endl;
    mySwap(&x, &y);
    cout << "x = " << x << "; y = " << y << endl;

    // Pointerarithmetik
    int val, arr[4] = {0, 10, 20, 30};
    ptr0 = &arr[0];

    ptr0++;
    cout << *ptr0 << endl;
    val = ++(*ptr0);
    cout << val << " " << *ptr0 << endl;
    val = *(++ptr0);
    cout << val << " " << *ptr0 << endl;
    val = (*ptr0)++;
    cout << val << " " << *ptr0 << endl;
    val = *(ptr0++);
    cout << val << " " << *ptr0 << endl;

    // Mit arrays
    cout << "array[3] ist identisch mit *(array + 3):\nZugriff mit []: " << arr[3] << "\nZugriff mit *(arr + n) "
         << *(arr + 3) << endl;

    int arr2[DIM] = {7, 5, 3};
    addOne(DIM, arr2);
    cout << *arr2 << " " << *(arr2 + 1) << " " << *(arr2 + 2);


    return 0;
}
