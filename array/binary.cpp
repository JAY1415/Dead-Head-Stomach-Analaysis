#include <iostream>
using namespace std;
binary(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
            // right sidee ko jana hai
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[8] = {2, 3, 5, 6, 7, 8, 12, 14};
    int eb = binary(even, 8, 5);
    cout << "index of that number is" << +eb << endl;
}
