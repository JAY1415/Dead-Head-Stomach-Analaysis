#include <iostream>
using namespace std;
bool issort(int *arr, int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool ans1 = issort(arr + 1, size - 1);
        return ans1;
    }
}
int main()
{
    int arr[5] = {2, 4, 10, 8, 9};
    int size = 5;
    bool ans = issort(arr, size);
    if (ans)
    {
        cout << "array is sorted" << endl;
    }
    else
    {
        cout << "arry is not sorted" << endl;
    }
    return 0;
}