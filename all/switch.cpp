#include <iostream>
using namespace std;
int main()
{
    char ah = 'a';
    int num = 1;
    cout << endl;
    switch (ah)
    {
    case '1':
        cout << "first" << endl;
        break;
    case 2:
        switch (num)
        {
        case 1:
            cout << "value is 1" << endl;
            break;

        default:
            break;
        }
        cout << "second" << endl;
        break;
    default:
        cout << "It is default value" << endl;
        break;
    }
    cout << endl;
    return 0;
}