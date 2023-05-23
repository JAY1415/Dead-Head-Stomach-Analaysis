#include <iostream>
#include <array>
#include <vector>
using namespace std;
int main()
{
    /*
    int back[3] = {1, 2, 3};
    array<int, 4> a = {1, 2, 3, 40};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    cout << "element at 3rd index =" << a.at(3) << endl;
    cout << "empty or not =" << a.empty() << endl;
    cout << "First element =" << a.front() << endl;
    cout << "Last element =" << a.back() << endl; */
    vector<int> v;
    vector<int> a(5, 1);
    vector<int> last(a);
    cout << "print last" << endl;
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "size = " << v.capacity() << endl;
    v.push_back(1);
    cout << "size = " << v.capacity() << endl;
    v.push_back(2);
    cout << "size = " << v.capacity() << endl;
    v.push_back(3);
    cout << "size = " << v.capacity() << endl;
    cout << "capacity  " << v.size() << endl;
    cout << "element at 2nd index" << v.at(2) << endl;
    cout << "Before Pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "after popping" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "clear size before  " << v.size() << endl;
    v.clear();
    cout << "clear size after " << v.size() << endl;
    v.clear();
}
