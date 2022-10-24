#include <iostream>

using namespace std;

static bool palindrome(int input);

int main()
{
	int input, result;
	cout << "Palindrome\n";
	cout << "Zahl eingeben";
	cin >> input;
	result = palindrome(input);
	cout << "Die umgekehrte Zahl lautet: ";
	if(result == input)
	{
		cout << "Die zahl ist ein Palindrom";
	} 
	else 
	{
		cout << "Die Zahl ist kein Palindrom";
	}
	return 0;
}

static bool palindrome(int input)
{	
	bool result;
	int digit;
	while(input > 0)
	{
		digit %= input;
	}
	return result;
}
