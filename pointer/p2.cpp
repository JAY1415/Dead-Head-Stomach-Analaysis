#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 4, 44, 444, 0};
    cout << "4th " << *arr << endl;
    cout << "4th " << *arr + 1 << endl;
    cout << "4th " << *(arr + 1) << endl;
    cout << "9 th " << *(arr + 2) << endl;
    int i = 4;
    cout << i[arr] << endl;
    int temp[10];
    cout << sizeof(temp) << endl;
    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    int *pr = &arr[0];
    ptr = ptr + 1;
    cout << (ptr);

    return 0;
}