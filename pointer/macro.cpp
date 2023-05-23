#include <iostream>
using namespace std;
#define PI 3.14

int main()
{
    int r = 4;
    double s = PI * r * r;
    cout << "The area of circle is : " << s << endl;
    return 0;
    int sum = 0;
    sum = (r < s) ? r : s;
    r = r + 2;
    s = r + 1;
    cout << "The area of circle of sum is larger or smaller : " << s << endl;
    return 0;
}