#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the value of a";
    cin >> a;
    cout << "enter the value of b";
    cin >> b;
    char op;
    cout << "enter the operation you want to perform" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
    case '%':
        cout << (a % b) << endl;

    default:
        cout << "please enter the valid Operation" << endl;
        break;
    }
}