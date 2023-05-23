#include <iostream>
using namespace std;
bool linearsearch(int arr[], int size, int k)
{
    if (size == 0)
        return false;
    if (arr[0] == k)
    {
        return true;
    }
    else
    {
        int r = linearsearch(arr + 1, size - 1, k);
        return r;
    }
}
int main()
{
    int arr[5] = {2, 34, 4, 5, 6};
    int size = 5;
    int key = 5;
    bool ans = linearsearch(arr, size, key);
    if (ans)
    {
        cout << "prsent" << endl;
    }
    else
    {
        cout << "absent" << endl;
    }
    return 0;
}