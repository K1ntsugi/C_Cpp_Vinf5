#include <iostream>
// Für sqrt
#include <cmath>
// Für add()
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::sqrt;
using std::vector;

int main()
{
    unsigned int n;
    cout << "\nAnzahl der Vektorelemente: ";
    cin >> n;
    vector<double> x(n);
    for (size_t k = 0; k < x.size(); k++)
    {
        x.at(k) = 1.0 / (k + 1.0);
        if (k == 0)
            cout << x.at(k);
        else
            cout << " ; " << x.at(k);
    }

    double vlaenge = 0.0;
    for (size_t k = 0; k < x.size(); k++)
    {
        vlaenge += x[k] * x[k];
    }
    vlaenge = sqrt(vlaenge);
    cout << "\nDie Länge des Vektors beträgt: " << vlaenge << endl;
}
