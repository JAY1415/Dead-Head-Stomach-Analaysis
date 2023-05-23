#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 2, 34, 5};
    char c[6] = "abcde";
    cout << a << endl;
    cout << c << endl;
    char *ca = &c[0];
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;
    cout << p << endl;
    return 0;
}