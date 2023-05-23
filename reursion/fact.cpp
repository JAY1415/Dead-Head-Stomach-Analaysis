#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
        return 1;
    int s = factorial(n - 1);
    int v = n * s;
    return v;
}
int main()
{
    int n;
    cin >> n;
    int ans = factorial(n);
    cout << ans;
    return 0;
}