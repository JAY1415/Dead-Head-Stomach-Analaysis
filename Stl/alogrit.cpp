#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    cout << "finding 6" << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "lower bound" << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "upper bounf" << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 3;
    int b = 5;

    cout << "max" << max(a, b) << endl;

    cout << "min" << min(a, b) << endl;

    swap(a, b);
    cout << "a  " << a << endl;

    string ae = "abcd";
    reverse(ae.begin(), ae.end());
    cout << "string " << ae << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "after rotate" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    sort(v.begin(), v.end());
    cout << "after sorting" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
}