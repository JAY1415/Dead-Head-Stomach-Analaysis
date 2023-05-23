#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "jay";
    m[13] = "shinde";
    m[2] = "ashok";
    m.insert({5, "bheema"});
    for (auto i : m)
    {
        cout << i.first << endl;
    }
    cout << "finding 1" << m.count(1) << endl;
}