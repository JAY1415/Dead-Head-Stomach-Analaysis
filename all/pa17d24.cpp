#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int spaces = 1;
        while (spaces < = n - i)
        {
            cout << " ";
        }
    }
}

/*             1
            1  2   1
        1   2  3   2   1
    1   2   3  4  3    2    1 */