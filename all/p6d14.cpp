#include <iostream>
using namespace std;
int main()
{
    ////    1      2  3          4 5 6
    /* int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i = i + 1;
    }*/
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int val = i;
        while (j <= i)
        {
            cout << val;
            val = val + 1;
            j++;
        }
        cout << endl;
        i = i + 1;
    }
}