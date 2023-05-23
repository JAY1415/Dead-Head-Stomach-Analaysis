#include <iostream>
#include <string>
using namespace std;
char getmax(string s)
{
    int arr[26] = {};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
    int max = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            ans = i;
            max = arr[i];
        }
    }
    char final = 'a' + ans;
    return final;
}
int main()
{
    string s;
    cin >> s;
    cout << getmax(s) << endl;
    return 0;
}