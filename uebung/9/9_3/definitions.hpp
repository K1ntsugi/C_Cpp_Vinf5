#pragma once
#include <iostream>
using namespace std;
class Mensch
{
	// Deklaration der private-geschuetzten Felder
private:
	string strVorname;
	string strNachname;
	int iAlter;
	// Deklaration der public-Methoden
public:
	// Standardkonstruktor der Klasse Mensch
	Mensch();
	// Parametrisierter Konstruktor der Klasse Mensch
	Mensch(string, string, int);
	// Destruktor der Klasse Mensch
	~Mensch();
	// Schreibe fuer jedes private geschuetzte
	// Feld jeweils einen set- und einen get-Prototyp
	string getVorname();
	string getNachname();
	int getAlter();
	void setVorname(string vorname);
	void setNachname(string nachname);
	void setAlter(int alter);
	string toString();
};