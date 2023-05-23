#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<float> d;

    d.push_back(4.33);
    d.push_back(3.33);
    for (float i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "print first element of index" << d.at(0) << endl;
    cout << "front=" << d.front() << endl;
    cout << "back" << d.back() << endl;
    cout << "Empty or Not =" << d.empty() << endl;
    cout << "before erase =" << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erase =" << d.size() << endl;
    for (int i : d)
    {
        cout << i << endl;
    }
    ////size value became zero after the erase function    max_value is same for starting and ending postion
}