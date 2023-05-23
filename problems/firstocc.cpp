///// first and last occurance using binary search

#include <iostream>
using namespace std;
int firstocc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastocc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int even[11] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 5};
    cout << "first occurance of 3 is at index " << firstocc(even, 11, 3) << endl;
    cout << "last occurance of 3 is at index " << lastocc(even, 11, 3);
    return 0;
}