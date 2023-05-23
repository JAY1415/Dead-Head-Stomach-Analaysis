#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // max heap
    priority_queue<int> max;
    // min heap
    priority_queue<int, vector<int>, greater<int>> minimum;
    max.push(13);
    max.push(33);
    max.push(1);
    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout << max.top() << " ";
        max.pop();
    }
    cout << endl;
    minimum.push(13);
    minimum.push(33);
    minimum.push(1);
    int m = minimum.size();
    for (int i = 0; i < m; i++)
    {
        cout << minimum.top() << " ";
        minimum.pop();
    }
    cout << endl;
    cout << "print emprty or not " << minimum.empty();
}
