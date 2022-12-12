#pragma once
#include <iostream>

using std::cout;
using std::endl;

class CAuto	
{
	private:
		int i_Insassen;
	public:
		CAuto()
		{
			cout << "Aufrauf Konstruktor CAuto" << endl;
		}
		
		void einsteigen(int i_Mitfahrer)
		{
			i_Insassen += i_Mitfahrer;
		}
		int getInsassen()
		{
			return i_Insassen;
		}

};
