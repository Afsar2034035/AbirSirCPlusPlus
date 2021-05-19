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

class Car : public Vehicle
{
    public:
        Car()
        {
            cout<<"This is a Car."<<endl;
        }
};

class Toyota : public Car
{
    public:
        Toyota()
        {
            cout<<"This is a Toyota Car."<<endl;
        }
};

class BMW : public Car
{
    public:
        BMW()
        {
            cout<<"This is a BMW Car."<<endl;
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

class Saudia : public Bus
{
    public:
        Saudia()
        {
            cout<<"This is a Saudia Bus."<<endl;
        }

};

int main()
{
    Toyota t;
    BMW b;
    Volvo v;
    Saudia s;
}


