#include <iostream>
#include <cstdio>
using namespace std;
saydigit(int n, string arr[])
{
    if (n == 0)
        return 1;
    int digit = n % 10;
    n = n / 10;
    saydigit(n, arr);
    cout << arr[digit] << " ";
}
int main()
{
    int n;
    cin >> n;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    saydigit(n, arr);
    return 0;
}