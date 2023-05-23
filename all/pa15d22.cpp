#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cin >> n;
    while (i <= n)
    {
        int space = 1, num = 1;
        while (space <= n - i)
        {
            cout << " ";
            space++;
        }
        int j = 1;
        while (j <= i)
        {
            cout << num;
            num++;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}