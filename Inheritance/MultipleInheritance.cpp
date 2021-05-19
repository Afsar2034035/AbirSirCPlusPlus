//N super class -> 1 sub class
/*#include <iostream>
using namespace std;

class FourWheeler
{
    public:
        void ForWheeler()
        {
            cout<<"This is a Four Wheeler Vehicle."<<endl;
        }
};

class TwoWheeler
{
    public:
        void TwWheeler()
        {
            cout<<"This is a Two Wheeler Vehicle."<<endl;
        }
};

class Vehicle : public FourWheeler, public TwoWheeler
{
    public:
        void Vhicle()
        {
            cout<<"This is a Vehicle."<<endl;
        }
};

int main()
{
    Vehicle m;
    m.ForWheeler();
    m.TwWheeler();
    m.Vhicle();
}*/

//Use cnstructor
#include <iostream>
using namespace std;

class FourWheeler
{
    public:
        FourWheeler()
        {
            cout<<"This is a Four Wheeler Vehicle."<<endl;
        }
};

class TwoWheeler
{
    public:
        TwoWheeler()
        {
            cout<<"This is a Two Wheeler Vehicle."<<endl;
        }
};

class Vehicle : public FourWheeler, public TwoWheeler
{
    public:
        Vehicle()
        {
            cout<<"This is a Vehicle."<<endl;
        }
};

int main()
{
    Vehicle m;
}
