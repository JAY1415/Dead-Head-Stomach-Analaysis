#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("jay");
    s.push("neha");
    s.push("avinash");
    cout << "Top element  " << s.top() << endl;
    s.pop();
    cout << "Top of element " << s.top() << endl;
    cout << "sizze of element" << s.size() << endl;
    cout << "Empty or not   " << s.empty() << endl;
}