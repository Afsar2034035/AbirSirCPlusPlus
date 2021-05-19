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

class Bus
{
public:
    void output()
    {
        cout<<"Base Class Bus."<<endl;
    }
};

class Vehicle : public Car, public Bus
{

};

int main()
{
    Vehicle v;
    v.Car::output();
    v.Bus::output();
}


