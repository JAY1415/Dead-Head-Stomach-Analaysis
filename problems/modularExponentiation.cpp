#include <iostream>
using namespace std;
int modularExponentit(int x, int y, int m)
{
    int a = 1;
    int b = x;
    int c = y;
    int d = 1;
    while (c != 0)
    {
        if (c % 2 == 1)
        {
            a = a * b % x;
        }
        b = b * b % x;
        c = c / 2;
    }
}
int main()
{
    int a, b, c, d;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    cout << "Enter the value of c" << endl;
    cin >> c;
    d = modularExponentit(a, b);
    cout << "The modular exponentiation of " << a << " and " << b << " is " << d << endl;
    return 0;
}