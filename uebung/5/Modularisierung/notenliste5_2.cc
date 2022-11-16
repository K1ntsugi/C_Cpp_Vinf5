// Notenliste.cc : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
// Author : Stefan Mueller
// Date of Construction:30.09.2022
// History: Checked in at 08.11.2022
#include "myDef.h"

int main()
{
    // Deklaration zweier leerer Vectoren
    vector<string> vectofNames;
    vector<float> vectofDegrees;

    // Deklaration und Initialisierung der Variablen

    char cInput = ' ';
    do
    {
        cInput = 0;
        cout << endl
             << endl;

        cout << "\'n\' = Namen und Note eingeben" << endl;
        cout << "\'l\' = letzten Eintrag loeschen" << endl;
        cout << "\'a\' = Alle Anzeigen" << endl;
        cout << "Geben Sie zum Beenden des Programms \'0\' ein!\n\n";
        cout << "Bitte waehlen Sie eine Option aus: ";
        cin >> cInput;
        cin.ignore(100, '\n'); // faengt zu lange Eingaben ab!

        if (cInput == 'n')
        {
            newGrade(vectofNames, vectofDegrees);
        }
        else if (cInput == 'l')
        {
            deleteLastGrade(vectofNames, vectofDegrees);
        }
        else if (cInput == 'a')
        {
            showGrades(vectofNames, vectofDegrees);
        }
        else
            continue;
    } while (cInput != '0');
    cout << "\n\nProgrammende!\n";
    return 1;
}
