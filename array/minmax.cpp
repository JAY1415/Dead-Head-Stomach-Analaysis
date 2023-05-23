#include <iostream>
using namespace std;
int getmax(int num[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, num[i]);
        /* if (num[i] > max)
        {
            max = num[i];
        }*/
    }
    // returning the max value
    return maxi;
}
int getmin(int num[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    // returning the min value
    return min;
}
int main()
{
    cout << "Hello,Just enter the no which do you want to sort" << endl;
    int size;
    cin >> size;
    int num[30];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Maximum value is :" << getmax(num, size) << endl;
    cout << "minimum  value is : " << getmin(num, size) << endl;
    return 0;
}
