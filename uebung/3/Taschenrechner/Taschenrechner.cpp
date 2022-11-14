#include <iostream>

using namespace std;

static double compute(char op, int a, int b);

int main()
{
	char run = 'j', c;
	int x, y;
	cout << "####################################"
		 << "\nTaschenrechner";

	do
	{
		cout << "\nOperand eingeben: ";
		cin >> c;
		cout << "\nZahl 1 eingeben: ";
		cin >> x;
		cout << "\nZahl 2 eingeben: ";
		cin >> y;
		cout << "\nErgebnis: " << compute(c, x, y);
		cout << "\nNochmal? <j/n>";
		cin >> run;
	} while (run == 'j' || run == 'J');
	return 0;
}

static double compute(char op, int a, int b)
{
	int result;
	switch (op)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		result = a / b;
		break;
	case '%':
		result = a % b;
		break;
	default:
		result = a + b;
		break;
	}
	return result;
}
