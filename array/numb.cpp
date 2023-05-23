#include <iostream>
using namespace std;
void printarray(int arr[], int size)
{
    cout << "printing the array" << endl;
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " " << endl;
    }
    cout << "printing done!!!" << endl;
}
int main()
{
    /* int number[15];
     // cout << "Value at index :" << number[14] << endl;
     cout << "Everything is fine" << endl;
     int s[4] = {12, 2, 33};
     cout << "value at 2 index : " << s[2] << endl;
     // int n = 4;
     cout << "printing the array" << endl;
     for (int i = 0; i < n; i++)
     {
         cout << s[i] << " ";
     }
 */
    int fourth[10] = {0};
    int n = 10;
    printarray(fourth, 10);

    int fifth[11] = {1};
    printarray(fifth, 11);

    char ch[5] = {'a', 'b', 'n', 'j', 'd'};
    cout << ch[3] << endl;

    cout << " everything is fine" << endl;
    cout << "printing the array" << endl;
    bool firstbool[9];
    for (int i = 0; i <= 5; i++)
    {
        cout << ch[i] << " " << endl;
    }
    cout << "printing done!!!" << endl;

    return 0;
}