#include <iostream>
using namespace std;
void print(int arr[], int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum += arr[j];
        }
        cout << sum << " ";
        }
}
int main()
{
    int arr[4] = {1, 34, 5, 14};
    int size = 4;
    print(arr, size);
    return 0;
}