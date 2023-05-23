#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int *ptr = &num;
    cout << num << endl;
    cout << *ptr << endl;
    int *q = ptr;
    cout << *q << endl;
    double i = 3;
    double *t = &i;
    *t = *t + 1;
    cout << *t << endl;
    cout << "before t" << t << endl;
    t = t + 1;
    cout << "after t " << t << endl;
    return 0;
}