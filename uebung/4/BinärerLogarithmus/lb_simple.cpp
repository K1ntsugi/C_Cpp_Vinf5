#include <iostream>

using namespace std;

int main()
{
    int input;
    cout << "Eingabe von x: ";
    cin >> input;

    int workingCopy = input;
    int count = 0;
    while (workingCopy >= 0)
    {
        if (workingCopy % 2 == 0)
        {
            workingCopy /= 2;
            count++;
        }
        else
        {
            cout << "Kein ganzer Logarithmus Dualis";
            break;
        }
    }

    // Für output besser Konstate verwenden
    cout << "Binärer Logarithmis von " << input << ": " << count;
}