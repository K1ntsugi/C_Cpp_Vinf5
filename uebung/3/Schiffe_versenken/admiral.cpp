#include <iostream>

using namespace std;

static void checkShips(bool shipmap[][5], int &ship_count);
static void playerShoot(bool shipmap[][5], int &ship_count);

int main()
{
	bool ships[5][5] = {
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0},
		{0, 0, 1, 0, 0}};

	int tries = 0;
	int ship_count = 0;

	do
	{
		tries++;
		checkShips(ships, ship_count);
		playerShoot(ships, ship_count);

	} while (ship_count > 0);

	cout << "Herzlichen Glühstrumpf! Sie haben gewonnen!";
	cout << "\nDas hat Sie Lebenszeit und " << tries << " Versuche gekostet.";

	return 0;
}

static void checkShips(bool shipmap[][5], int &ship_count)
{
	ship_count = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (shipmap[i][j])
			{
				ship_count++;
			}
		}
	}
	return;
}

static void playerShoot(bool shipmap[][5], int &ship_count)
{
	int x, y;
	cout << "\nSie sind am Zug.\nWählen sie mit den Zahlen [0 - 4] zuerst die Zeile und dann mit den selben Ziffern die Spalte";
	cout << "\nx: ";
	cin >> x;
	cout << "\ny: ";
	cin >> y;

	if (shipmap[x][y] == true)
	{
		shipmap[x][y] = false;
		ship_count--;
		cout << "Boom! Treffer!";
		return;
	}

	cout << "Kein Treffer!\n";
	return;
}