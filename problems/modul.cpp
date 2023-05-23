#include <iostream>
using namespace std;
int modularExponentit(int x, int y, int m)
{
    int result = 1;
    while (y)
    {
        if (y & 1)
            result = (result * x) % m;
        x = (x * x) % m;
        y >>= 1;
    }
    return result;
}
