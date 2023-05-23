#include <iostream>
using namespace std;

class office
{
public:
    office()
    {
        cout << " Welcome To the Pune office";
    }
};
class office_b : public office
{
};

class office_c : public office_a, public office
{
public:
    office_C()
    {
        cout << " Welcome To the Chennai office";
    }
};
int main()
{
    office_c o1;
    return 0;
}