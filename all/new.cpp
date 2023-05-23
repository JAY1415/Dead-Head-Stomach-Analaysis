#include <iostream>
using namespace std;
bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][4];
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << "enter the value of element to search" << endl;
    int target;
    cin >> target;
    if (isPresent(arr, target, 3, 4))
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element is not  found" << endl;
    }
    return 0;
}