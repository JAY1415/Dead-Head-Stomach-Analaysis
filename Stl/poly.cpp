#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "This animal makes a sound." << endl;
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Meow!" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Woof!" << endl;
    }
};

int main()
{
    Animal *a;
    Cat c;
    Dog d;

    a = &c;
    a->speak();

    a = &d;
    a->speak();

    return 0;
}
