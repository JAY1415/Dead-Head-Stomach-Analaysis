#include <iostream>
using namespace std;
bool checkpalindrome(string str, int i, int j)
{
    // base case
    if (i > j)
        return true;
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        // recursive call
        return checkpalindrome(str, i + 1, j - 1);
    }
}
int main()
{
    string name = "abba";
    cout << endl;
    bool ispalindrome = checkpalindrome(name, 0, name.length() - 1);
    if (ispalindrome)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}