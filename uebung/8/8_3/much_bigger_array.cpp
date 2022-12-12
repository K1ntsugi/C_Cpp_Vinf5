#include <iostream>
#include <array>

using namespace std;

template <typename T, const int DIM = 1000000>
struct TArray
{
    T *aptr = new T[DIM];
    long elements = DIM;
    inline void freeMemory()
    {
        delete[] aptr;
        aptr = nullptr;
        elements = 0;
    }

    inline long getMemorySize() { return elements * sizeof(T); }

    inline long getSize() { return DIM; }

    inline bool isAllocated()
    {
        if (aptr != nullptr)
            return true;
        return false;
    }
};

int main()
{
    TArray<int> arr1;
    for (int i = 0; i < arr1.getSize(); i++)
    {
        arr1.aptr[i] = i;
    }

    for (int i = 0; i < arr1.getSize(); i++)
    {
        if (i % 999 == 0)
            cout << (arr1.aptr[i]) << endl;
    }

    arr1.freeMemory();

    return 0;
}