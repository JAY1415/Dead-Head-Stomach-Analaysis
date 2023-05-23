/// program for swaping the even and odd numbers in array
/// int a[4]={2,4,5,6}
/// output = {4,2,6,5}
#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapAlternate(int arr[], int size)
{
    // for swaping elements
    for (int i = 0; i <= size; i = i + 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int even[8] = {5, 3, 4, 9, 1, 7, 6, 0};
    int odd[5] = {2, 4, 5, 6, 7};
    swapAlternate(even, 8);
    printarray(even, 8);
    cout << endl;
    swapAlternate(odd, 5);
    printarray(odd, 5);
    return 0;
}