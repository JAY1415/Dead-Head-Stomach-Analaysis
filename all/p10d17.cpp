#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    char star = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << star;
            star = star + 1;
            j++;
        }
        cout << endl;
        i = i + 1;
    }
}