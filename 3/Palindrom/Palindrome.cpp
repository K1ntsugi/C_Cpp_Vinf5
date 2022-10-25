#include <iostream>

using namespace std;

static int palindrome(int input);

int main()
{
	int input, result;
	cout << "Palindrome\n";
	cout << "Zahl eingeben";
	cin >> input;
	result = palindrome(input);
	cout << "Die umgekehrte Zahl lautet: " << result;
	if (result == input)
	{
		cout << "\nDie zahl ist ein Palindrom";
	}
	else
	{
		cout << "\nDie Zahl ist kein Palindrom";
	}
	return 0;
}

static int palindrome(int input)
{
	int n = input, reversed = 0, remainder;
	while (n != 0)
	{
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;
	}
	return reversed;
}
