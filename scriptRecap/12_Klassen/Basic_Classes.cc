#include <iostream>
#include <string>

using namespace std;

class CAuto
{
	private:
		string kfz_kz;
		int nInsassen;
	public:
		CAuto(string kennzeichen);
		// Copy-Konstruktor
		// Wenn nicht selbst implementiert, vom System erzeugt
		// Dann -> initialisiert neues Obj mit Werten eines bereits vorhandenem
		CAuto(const CAuto& aAuto); 
		void einsteigen(int nMitfahrer) {nInsassen += nMitfahrer;}
		int getInsassen(void) {return nInsassen;}
		~CAuto(); // Destruktor (gleicher Text wie für Copy Konstruktor gültig)
};

CAuto::CAuto(string kennzeichen) : kfz_kz(kennzeichen), nInsassen(0)
{
	cout << "Aufruf des Konstruktors" << endl;
}

CAuto::CAuto(const CAuto& aAuto)
{
	cout << "Aufruf des Copy-Konstruktors" << endl;
	kfz_kz = aAuto.kfz_kz;
	nInsassen = aAuto.nInsassen;
}

CAuto::~CAuto()
{
	cout << "Aufruf des Destruktors" << endl;
}


int main()
{
	CAuto flotter3erBMW("HO-E-69");
	CAuto myNewCyer = flotter3erBMW; // myNewCar hat Kennzeichen von BMW
	cout << "Programm beendet" << endl;

	return 0;
}
