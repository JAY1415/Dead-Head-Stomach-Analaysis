#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = n;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*"
                 << " ";
            count++;
            cout << n - i + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}