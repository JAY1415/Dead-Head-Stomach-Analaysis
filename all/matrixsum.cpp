#include <iostream>
using namespace std;
void printsum(int arr[3][3], int row, int col)
{
    cout << "Printing sum " << endl;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}
int main()
{
    int arr[3][3];
    cout << " Enter the element " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
    printsum(arr, 3, 3);
    return 0;
}