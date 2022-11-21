#include <iostream>

using namespace std;

int main()
{

    for (int i = 31; i < 256; i++)
    {
        cout << i << " => " << (char)i << "\n";
    }

    return 0;
}