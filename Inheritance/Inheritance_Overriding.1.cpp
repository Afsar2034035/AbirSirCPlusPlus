#include <iostream>
using namespace std;

class Car
{
public:
    void output()
    {
        cout<<"Base Class Car."<<endl;
    }
};

class Bus : public Car
{
public:
    void output()
    {
        cout<<"Derived Class Bus."<<endl;
    }
};

int main()
{
    Bus b;
    b.output();
}
