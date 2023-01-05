//
// Created by maxGr on 05.01.2023.
//
#include <iostream>
#include <array>
#include <list>

using namespace std;

struct Punkt {
    int x;
    int y;
};

typedef struct Punkt TPunkt;

int *findViaPtr(int *arr, int len, int x) {
    int *ptr = &arr[0];
    for (int i = 0; i < len; i++) {
        if (*ptr == x) {
            cout << *ptr;
            return ptr;
        }
        ptr++;
    }
    return nullptr;
}

namespace UTIL {
    template<typename T, typename P>
    P findViaIterator(P first, P behind_end, T x) {
        while (first != behind_end && *first != x) {
            first++;
        }
        cout << *first;
        return first;
    }
}

int main() {
    //Achtung Funktion geht nicht mit STL array: array<int, 5> arr = {1,2,3,4,5}; WHY?
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    // Finden eines Wertes in einem Array mit Pointer
    ptr = findViaPtr(arr, 5, 3);
    // Finden eines Wertes in einem Array mit Iterator
    cout << endl;
    ptr = nullptr;
    ptr = UTIL::findViaIterator(arr, (arr+5), 4);

    // Zugriff auf Liste mit Iterator und Zeiger
    TPunkt iPkt[2] = {{0,1}, {2,1}};
    list<TPunkt> iList;
    iList.push_back(iPkt[0]);
    iList.push_back(iPkt[1]);
    for(list<TPunkt>::iterator it = iList.begin(); it != iList.end(); it++){
        cout << (*it).x << " " << it->y << endl;
    }
    /* Einfacher ausgedrückt:
      for(auto & it : iList){
        cout << it.x << " " << it.y << endl;
    }
    */

    // Zugriff auf Liste mit Iterator und Zeiger
    array<double, 10> x;
    double *ptr_x = &x[0];
    double *ptr_pos = x.data();

    if(ptr_x == ptr_pos){
        cout << endl << " px und pp sind identisch" << endl;
    }

    for(size_t i = 0; i < x.size(); i++){
        x[i] = (i+1.0) * (i+1.0);
    }

    array<double, x.size()>::iterator p_iter;
    for(p_iter = x.begin(); p_iter != x.end(); p_iter++){
        cout << *p_iter << endl;
    }

    return 0;
}