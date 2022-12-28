#include <iostream>
#include <array>
#include <vector>
#include <string>

using std::cout;
using std::array;
using std::vector;
using std::endl;


#if defined (I_DIDNT_DO_IT)
	cout << "I swear!" << endl;	
#else
#define I_DIDNT_DO_IT cout << "I did not have sex with that woman." << endl;
#endif

typedef std::string definitiv_kein_string;
typedef std::array<int, 10> definitiv_kein_array;
typedef std::vector<int> definitiv_kein_vector;

struct
{
	definitiv_kein_string name;
	definitiv_kein_vector anzahl_Seitenspruenge;
	definitiv_kein_string partei;

}president_Old;

typedef struct
{
	definitiv_kein_string name;
	definitiv_kein_vector anzahl_Seitenspruenge;
	definitiv_kein_string partei;

}president_New;


int main()
{
	I_DIDNT_DO_IT;
	definitiv_kein_string s = "Und das ist nicht ihr String";
	cout << s << endl;

	president_Old.name = "Donald Trump";
	
	definitiv_kein_vector seitensprungVektor;
	president_New Biden, Obama = {"Barack Obama",
		seitensprungVektor , "Demokrat"};

	cout << Obama.name << endl;


	return 0;
}
