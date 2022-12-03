#include "Ampel.hpp"

void setNachtModus(bool nacht)
{
	string result = (nacht) ? "Nachtmodus aktiviert" : "Nachtmodus deaktiviert"; 
    cout << result << endl;
}

void printColor(e_farbe e)
{
	switch (e) 
	{
		case rot:
			cout << "!---Rot---!" << endl;
			break;
		case gelb:
			cout << "?---Gelb---?" << endl;
			break;
		case gruen:
			cout << "~~~~Gruen~~~~" << endl;
			break;
		default:
			cout << "Fehler in enum der Ampel" << endl;
			break;
	}
}

void switchPhases(e_phase e)
{
	switch(e)
	{
		//geht das auch nur mit Zahlen
		//Wird ja vom Kompiler gemapt??
		case 0:
			sleep(20);
			break;
		case 1:
		case 2:
		case 3:
			sleep(2);
			break;
		case 4:
			sleep(20);
			break;
		case 5:			
		case 6:
		case 7:
			sleep(2);
			break;
		case 8:
		default:
			cout << "Fehler: Phase nicht definiert";
			break;
	}

}
