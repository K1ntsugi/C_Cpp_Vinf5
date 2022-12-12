#include <iostream>
#include <array>

using namespace std;

template <typename T, const int DIM = 1000>
struct TArray
{
    std::array<T, DIM> aArray;
};

int main()
{
    TArray<int> arr1;
    for (size_t i = 0; i < arr1.aArray.size(); i++)
    {
        arr1.aArray.at(i) = i;
    }

    return 0;
}