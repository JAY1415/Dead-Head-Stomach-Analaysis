/// square root function using binary search and find out decimial value also
#include <iostream>
using namespace std;
long long int sqrtx(int n)
{
    int s = 0;
    int e = n;
    long long mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        long long square = mid * mid;
        if (square == n)
            return mid;
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double moreaccurate(int n, int precision, int temp)
{
    double factor = 1;
    double ans = temp;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = 0; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    int temp = sqrtx(n);
    cout << "answer is the " << moreaccurate(n, 3, temp) << endl;
    return 0;
}