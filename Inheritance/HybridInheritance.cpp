#include <iostream>
using namespace std;

class Vehicle
{
    public:
        Vehicle()
        {
            cout<<"This is a Vehicle."<<endl;
        }
};

class Car
{
    public:
        Car()
        {
            cout<<"This is a Car."<<endl;
        }
};

class Toyota : public Vehicle , public Car
{
    public:
        Toyota()
        {
            cout<<"This is a Toyota Car."<<endl;
        }
};

class Bus : public Vehicle
{
    public:
        Bus()
        {
            cout<<"This is a Bus."<<endl;
        }
};

class Volvo : public Bus
{
    public:
        Volvo()
        {
            cout<<"This is a Volvo Bus."<<endl;
        }
};

class Greenline : public Bus
{
    public:
        Greenline()
        {
            cout<<"This is a Greenline Bus."<<endl;
        }
};

int main()
{
    Toyota t;
    Volvo v;
    Greenline g;
}
