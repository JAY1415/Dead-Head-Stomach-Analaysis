#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 10;
    int sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << i << endl;
}