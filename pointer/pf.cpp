#include <iostream>
using namespace std;
void print(int *p)
{
    cout << *p << endl;
}
void update(int *p)
{
    *p = *p + 1;
}
int sum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    /// return sum;
}
int main()
{
    int value = 4;
    int *p = &value;
    // print(p);
    // update(p);
    cout << *p << endl;
    int arr[8] = {1, 3, 4, 5, 6, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(n);
    // cout << sum(arr + 2, 2) << endl;
    return 0;
}