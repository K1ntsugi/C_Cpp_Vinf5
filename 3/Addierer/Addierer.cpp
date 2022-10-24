#include <iostream>

using namespace std;

static int add(int a, int b);

int main()
{
	int x,y;
	cout << "Addierer\n";
	cout << "Zahl 1: ";
	cin >> x;
	cout << "\nZahl 2: ";
	cin >> y;
	cout << "\nErgebnis: " << add(x,y);
	return 0;
}

static int add(int a, int b)
{
	int result = 0;
	result = a + b;
	return result;
}
