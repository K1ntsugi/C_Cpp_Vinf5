#include "definitions.hpp"
#include <vector>
#include <iostream>

int main()
{
    Mensch noName;
    Mensch first = {"Adam", "Simth", 25};
    Mensch second = {"Eva", "Meyers", 21};

    cout << second.toString();

    vector<Mensch> vec{noName, first, second};

    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << vec[i].toString() << endl;
    }

    return 0;
}