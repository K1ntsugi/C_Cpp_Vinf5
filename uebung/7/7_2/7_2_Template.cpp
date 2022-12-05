// tmplFind8.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <array>
using std::array;
using std::cin;
using std::cout;

namespace UTIL
{
    template <typename T, typename P>
    P find(P first, P behind_end, T x)
    {
        while (first != behind_end && *first != x)
            first++;
        return first; // Ergebnis
    }
}

int main()
{
    const int DIM = 10;
    int iSearch = 0;
    array<int, 10> iArray{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // TODO
    array<int, DIM>::iterator iterator;
    while (1)
    {
        cout << "Geben Sie einen positiven Suchwert ein: ";
        cin >> iSearch;
        iterator = UTIL::find(iArray.begin(), iArray.end(), iSearch);
        if (iterator == iArray.end())
        {
            cout << "nicht gefunden! ==>Programmende\n";
            break;
        }

        cout << "Gefunden: " << *iterator << '\n';
    }

    return 0;
}