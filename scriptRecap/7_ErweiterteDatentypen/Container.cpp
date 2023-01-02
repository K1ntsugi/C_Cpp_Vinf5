//
// Created by maxGr on 02.01.2023.
//

#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <array>
#include <list>

using namespace std;

ostream &operator<<(ostream &s, const vector<double> &v) {
    for (size_t i = 0; i < v.size(); i++) {
        s << v[i] << ' ';
    }
    return s;
}

/*void showList(list<int> param) {
    for (auto out: param) {
        cout << out << ',';
        cout << '\n';
    }
}*/


void showList(list<int> param) {
    int count = 0;
    for (auto out: param) {
        count++;
        cout << out;
        if (count < param.size()) {
            cout << ", ";
        }
    }
}


int main() {
    // Beispiel 1
    array<int, 5> iArr{{3, 4, 5, 1, 2}}; // doppelte Klammern sind notwendig? WTF
    array<double, 5> dblArr = {1.1, 2.1, 3.3, 4.1, 5.5};
    array<string, 2> strArr = {{string("Affe"), "Bobo"}};

    cout << "Initial iArr: ";
    for (auto i: iArr) {
        cout << i << ' ';
    }
    sort(iArr.begin(), iArr.end());
    cout << "\nSorted iArr: ";
    for (auto i: iArr) {
        cout << i << ' ';
    }
    cout << "\nInitial dblArr: ";
    for (auto i: dblArr) {
        cout << i << ' ';
    }
    cout << "\nReversed dblArr: ";
    reverse_copy(dblArr.begin(), dblArr.end(), ostream_iterator<double>(cout, "."));
    cout << "\nstrArr: ";
    for (auto &s: strArr) {
        cout << s << ' ';
    }

    // Beispiel 2 - Speichereffizienz
    int cArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    array<int, 10> cppArr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> cppVec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "\nsizeof(int)= " << sizeof(int) << endl;
    cout << "sizeof(cArr)= " << sizeof(cArr) << endl;
    cout << "sizeof(cppArr)= " << sizeof(cppArr) << endl;
    cout << "sizeof(cppVec)= " << sizeof(cppVec) + sizeof(int) * cppVec.capacity() << endl;
    cout << "               = sizeof(cppVec): " << sizeof(cppVec) << endl;
    cout << "               + sizeof(int) * cppVec.capacity(): " << sizeof(int) * cppVec.capacity() << endl;
    // Der Vektor wird mit 24 zusätzlichen Bytes initialisiert, sodass er bis zu dieser Größe wachen kann ohne neuen Speicher anfordern zu müssen

    // Beispiel 3 - statischer und dynamischer Vektor
    // 3.1 statisch
    vector<int> iv(3);
    vector<double> dv(3, 1.1);
    vector<float> fv(3, 2.1F);
    vector<double> dvempty;

    dvempty.resize(iv.size());
    for (size_t i = 0; i < iv.size(); i++) {
        iv[i] = i + 1;
        dvempty[i] = iv[i] + dv[i];
    }

    for (size_t i = 0; i < dvempty.size(); i++) {
        cout << dvempty[i] << ' ';
    }
    cout << endl;
    // 3.2 dynamisch
    vector<int> dynVec;

    dynVec.push_back(-3);
    dynVec.push_back(2);
    dynVec.push_back(0);

    cout << "Vektorlaenge: " << dynVec.size() << ". Inhalt an dynVec[0]: " << dynVec[0] << endl;

    dynVec.pop_back();
    cout << "Vektorlaenge nach dynVec.pop_back(): " << dynVec.size() << endl;

    // 4: Ausgeben eines Vektors
    vector<double> dv2(5, 3.1); // länge 5, initialisiert mit 3.1
    for (unsigned int k = 0; k < dv2.size(); k++) {
        cout << dv2[k] << ' ';
    }

    copy(dv2.begin(), dv2.end(), ostream_iterator<double, char>(cout, "  "));

    // Diese Ausgabe funktioniert nur, weil wir den Operator überladen haben, siehe Funktionen am Anfang des files
    cout << dv2 << endl;

    // Beispiel 4: Listen (doppelt verkettet)
    list<int> iList = {2, 3, 4};
    iList.push_back(5);
    iList.push_front(1);

    list<int> myNewList{1, 2, 3, 4, 5};
    showList(iList);
    cout << endl;
    showList(myNewList);

    return 0;
}