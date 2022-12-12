#include <iostream>
#include <array>

using namespace std;

/*template <typename T>
T spawnArray()
{
    array<T, 1000> nums;
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = i;
    }

    return nums;
}*/

template <typename T, const int DIM = 1000>
struct TArray
{
    T aArray[DIM];
    inline size_t getMemorySize() { return DIM * sizeof(T); }
    inline size_t getSize() { return DIM; }
};

int main()
{
    TArray<int> arr1;
    for (size_t i = 0; i < arr1.getSize(); i++)
    {
        arr1.aArray[i] = i;
        cout << arr1.aArray[i] << endl;
    }

    // for-in-loop
    return 0;
}