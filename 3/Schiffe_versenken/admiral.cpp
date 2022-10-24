#include <iostream>
#include <type_traits>

using namespace std;

static void checkships(bool &shipmap[]);
static void playerShoot(bool &shipmap[][]);

int main()
{
	bool ships[5][5] = {
		{0, 0, 1, 1, 0},
		{1, 0, 0, 0, 0},
		{1, 0, 0, 1, 1},
		{1, 1, 0, 0, 0},
		{1, 0, 1, 0, 0}};

	int tries = 0;
	int ship_count = 0;

	do
	{

		playerShoot(ships);

	} while (ship_count > 0);

	cout << "Herzilchen Gühstrumpf! Sie haben gewonnen!";
	cout << "\nDas hat Sie Lebenszeit und " << tries << " Versuche gekostet.";

	return 0;
}

static void checkships(bool &shipmap[], int &ship_count)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (shipmap[i][j] == 1)
				ship_count++;
		}
	}
}

static void playerShoot(bool &map)
{
}
