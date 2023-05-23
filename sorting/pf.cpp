#include <iostream>
using namespace std;
int main()

{

    int Array[] = {1, 2, 3, 4, 5};

    int N = sizeof(Array) / sizeof(Array[0]);
    cout << N;
}