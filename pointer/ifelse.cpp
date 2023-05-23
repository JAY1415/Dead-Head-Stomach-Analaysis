#include <iostream>
using namespace std;
inline int getmax(int &a, int &b)
{
    return (a > b) ? a : b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int sum = getmax(a, b);
    cout << sum;
    return 0;
}