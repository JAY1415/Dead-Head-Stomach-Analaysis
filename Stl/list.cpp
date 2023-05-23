#include <iostream>
#include <list>
/// list is made using the double ended queue
using namespace std;
int main()
{
    list<int> l;
    list<int> n(5, 100);
    for (int i : n)
    {
        cout << i << endl;
    }
    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout << "After erase" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << "sizelist =" << l.size() << endl;
}