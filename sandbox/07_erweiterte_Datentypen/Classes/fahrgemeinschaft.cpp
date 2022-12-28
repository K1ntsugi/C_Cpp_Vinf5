#include "auto.hpp"

int main()
{
	CAuto golf3;
	golf3.einsteigen(10);
	cout << "Mitfahrer im Auto: " << golf3.getInsassen() << endl;
	
	return 0;
}
