#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + j - 1; /// we should write char ch = 'A' + j -1  to get  ABC
            cout << ch;
            j++;
        }
        cout << endl;
        i = i + 1;
    }
}