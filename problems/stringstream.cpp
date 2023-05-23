#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{

    vector<int> ineer;
    stringstream ss(str);
    char ch;
    int temp;
    while (ss >> temp)
    {
        ineer.push_back(temp);
        ss >> ch; /// for ignore the comma and print only the numbers
    }
    return ineer;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}

int main()
{
    vector<int> v;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
