#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
	string myCars[5];
	myCars[0] = "1";
	myCars[1] = "2";
	myCars[2] = "3";
	myCars[3] = "4";
	myCars[4] = "5";

	for (auto ele : myCars)
	{
		cout << ele << endl;
	}

	return 0;
}
