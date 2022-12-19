#include "mensch_2.hpp"
#include <sstream>

Mensch::Mensch()
{
    strVorname = " ";
    strNachname = " ";
    iAlter = 0;
}

Mensch::Mensch(string vorname, string nachname, int alter)
{
    strVorname = vorname;
    strNachname = nachname;
    iAlter = alter;
}

Mensch::~Mensch()
{
    cout << "Destruktor der Klasse Mensch.\n";
}

string Mensch::getVorname()
{
    return strVorname;
}

string Mensch::getNachname()
{
    return strNachname;
}

int Mensch::getAlter()
{
    return iAlter;
}

void Mensch::setVorname(string vorname)
{
    strVorname = vorname;
}

void Mensch::setNachname(string nachname)
{
    strNachname = nachname;
}

void Mensch::setAlter(int alter)
{
    iAlter = alter;
}

string Mensch::toString()
{
    stringstream ss;
    ss << strNachname << " " << strVorname << " ist " << iAlter << " Jahre alt\n";
    return ss.str();
}
