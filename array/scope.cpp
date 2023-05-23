#include <iostream>
using namespace std;
void update(int arr[], int n)
{
    cout << endl
         << "Inside the main function" << endl;
    arr[0] = 120;
    // printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "going back to the main function" << endl;
}
int main()
{
    int arr[3] = {1, 2, 3};
    update(arr, 3);
    cout << endl
         << "Printing in the main function" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}