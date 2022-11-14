#include "myDef.h"

void newGrade(vector<string> &vectofNames, vector<float> &vectofDegrees)
{
    string strName;
    float fDegree = 5.0F;
    cout << "Namen eingeben: ";
    // cin >> strName;   //1 Was kann hier passieren?
    getline(cin, strName); // 3 jetzt passt es!
    vectofNames.push_back(strName);
    // 2 cin.ignore(500, '\n'); //2 Schafft Abhilfe aber immer noch nicht ideal!

    cout << "\nNote eingeben: ";
    cin >> fDegree;
    vectofDegrees.push_back(fDegree);
    system("clear"); // Bildschirmanzeige loeschen Tip Windows/IX CLS/clear
}

void deleteLastGrade(vector<string> &vectofNames, vector<float> &vectofDegrees)
{
    cout << vectofNames.back() << " mit der Note " << vectofDegrees.back() << " wird geloescht!" << endl;
    vectofNames.pop_back();
    vectofDegrees.pop_back();
    getchar();       // Anzeige bis zum Tastendruck anhalten
    system("clear"); // Bildschirmanzeige loeschen
}

void showGrades(vector<string> &vectofNames, vector<float> &vectofDegrees)
{
    int i = 0;
    for (string name : vectofNames)
    {
        cout << "\nName: " << name << " hat die Note: " << vectofDegrees.at(i++);
    }
    getchar();       // Anzeige bis zum Tastendruck anhalten
    system("clear"); // Bildschirmanzeige loeschen
}