#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1, j = 0;
    while (i <= n)
    {
        while (j <= i - 1)
        {
            cout << i << " ";
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }
}
/*  1
    2   2
    3   3   3
    4   4    4    4 */