#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::vector;

void newGrade(vector<string> &vectofNames, vector<float> &vectofDegrees);
void deleteLastGrade(vector<string> &vectofNames, vector<float> &vectofDegrees);
void showGrades(vector<string> &vectofNames, vector<float> &vectofDegrees);
void clearStuff(bool wait)
{
    if (wait)
    {
        getchar();
    }
    system("clear");
}