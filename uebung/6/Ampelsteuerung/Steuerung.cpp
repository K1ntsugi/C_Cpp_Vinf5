#include "Ampel.hpp"
#include <iostream>
#include <iterator>

#define clear_screen system("clear");

using namespace std;

bool tag;
int phase_Ampel;
int h_day, h_night;

int main()
{	
	tag = 1;
	h_day = 12;
	h_night = 12;
	phase_Ampel = 0;
	clear_screen;

    do
    {
		if(tag)
		{
			setNachtModus(false);
			while (h_day >= 0) {
				switch (phase_Ampel) {
					case 0:
						cout << "Ampel 1: "; 
						printColor(gruen);
						cout << "Ampel 2: ";
						printColor(rot);
						switchPhases(null);
						clear_screen;
						phase_Ampel = 1;
						break;
					case 1:
						cout << "Ampel 1: "; 
						printColor(gelb);
						cout << "Ampel 2: ";
						printColor(rot);
						switchPhases(eins);
						clear_screen;
						phase_Ampel = 2;
						break;
					case 2:
						cout << "Ampel 1: "; 
						printColor(rot);
						cout << "Ampel 2: ";
						printColor(rot);
						switchPhases(zwei);
						clear_screen;
						phase_Ampel = 3;
						break;
					case 3:
						cout << "Ampel 1: "; 
						printColor(rot);
						cout << "Ampel 2: ";
						printColor(gelb);
						switchPhases(drei);
						clear_screen;
						phase_Ampel = 4;
						break;
					case 4:
						cout << "Ampel 1: "; 
						printColor(rot);
						cout << "Ampel 2: ";
						printColor(gruen);
						switchPhases(vier);
						clear_screen;
						phase_Ampel = 5;
						break;
					case 5:
						cout << "Ampel 1: "; 
						printColor(rot);
						cout << "Ampel 2: ";
						printColor(gelb);
						switchPhases(fuenf);
						clear_screen;
						phase_Ampel = 6;
						break;
					case 6:
						cout << "Ampel 1: "; 
						printColor(rot);
						cout << "Ampel 2: ";
						printColor(rot);
						switchPhases(sechs);
						clear_screen;
						phase_Ampel = 7;
						break;
					case 7:
						cout << "Ampel 1: "; 
						printColor(gelb);
						cout << "Ampel 2: ";
						printColor(rot);
						switchPhases(sieben);
						clear_screen;
						phase_Ampel = 8;
						break;
					case 8:
						cout << "Ampel 1: "; 
						printColor(gelb);
						cout << "Ampel 2: ";
						printColor(gelb);
						switchPhases(eins);
						clear_screen;
						phase_Ampel = 0;
						break;
					default:
						break;
				}	
			}
			setNachtModus(true);
		}
		else
		{
			setNachtModus(true);
			int h_night = 12;
			
		}

		h_day = 12;
		h_night = 12;
    } while (1);

    return 0;
}
