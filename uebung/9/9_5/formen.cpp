#include <iostream>
#include <cmath>

using namespace std;

class Figur {
public:
    virtual double flaeche() const = 0;

    virtual double umfang() const = 0;
};

class Rechteck : public Figur {
private:
    double a, b; // Seiten
public:
    Rechteck(double A, double B) : a(A), b(B) {}

    double flaeche() const { return a * b; }

    double umfang() const { return 2.0 * (a + b); }
};

class Dreieck : public Figur {
private:
    double a, b, c;
public:
    Dreieck(double A, double B, double C) : a(A), b(B), c(C) {}

    double flaeche() const {
        return 0.5 * c * ::sqrt((a * a) - (0.25 * (c * c)));
    }

    double umfang() const { return a + b + c; }
};

class Kreis : public Figur {
private:
    //const double M_PI = 3.14159265;
    double r;
public:
    Kreis(double R) { r = R; }

    double umfang() const { return 2. * M_PI * r; } // 2. => double Konstante
    double flaeche() const { return M_PI * r * r; }
};


int main() {
    Kreis k (5.);
    cout << k.flaeche() << ' ' << k.umfang() << endl;

    Rechteck recht(2,3);
    cout << recht.flaeche() << ' ' << recht.umfang() << endl;

    Dreieck d(2,2,2);
    cout << d.flaeche() << ' ' << d.umfang() << endl;


    return 0;
}