#include <iostream>
using namespace std;

class A
{
    public:
        void Vehicle()
        {
            cout<<"This is a Vehicle."<<endl;
        }
};

class B : public A
{
    public:
        void Car()
        {
            cout<<"This is a Car."<<endl;
        }
};

int main()
{
    B m;
    m.Vehicle();
    m.Car();
}
