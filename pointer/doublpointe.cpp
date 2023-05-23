#include <iostream>
using namespace std;
// void update(int **p2)
//{
//  p2 = p2 + 1;
//  cout << **p2 << endl;
//  *p2 = *p2 + 1;
//  cout << *p2 << endl;

//  **p2 = **p2 + 1;
// cout << **p2 << endl;
//}

void np(int *p)
{
    *p = (*p) * 2;
}
int main()
{
    /* int i = 5;
     int *p = &i;
     int **p2 = &p;
     update(p2);
     cout << "after" << i << endl;
     cout << "after" << p << endl;
     cout << "after" << p2 << endl;
    int first = 8;
    int *p = &first;
    cout << (*p)++ << " ";
    cout << first << endl;
    return 0;

    float f = 12.5;
    float p = 21.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p << endl;

    int arr[6] = {11, 21, 31};
    int *p = arr;
    cout << p[2] << endl;
    return 0;

    char ch = 'b';
    char *ptr = &ch;
    ch++;
    cout << *ptr << endl;
    return 0;

    char arr[] = "abcde";
    char *p = &arr[0];
    cout << p << endl;*/

    int i = 10;
    np(&i);
    cout << i << endl;
    return 0;
}