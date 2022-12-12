#include <iostream>

using namespace std;

class A
{
};

template <class T>
void fkt(T){cout << "#1\n"};

template <class T>
void fkt(T *){cout << "#2\n"};

template <class T>
void g(T *t)
{
    (fkt)(t)
}

int main()
{

    return 0;
}