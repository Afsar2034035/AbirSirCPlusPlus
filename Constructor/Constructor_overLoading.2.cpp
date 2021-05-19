
#include <iostream>
using namespace std;

class Area
{
    public:
        Area()
        {
            cout<<"Nothing To print Here"<<endl;
        }
        Area(double a)
        {
            double b;
            b = a*a;
            cout<<"Area  of square is "<<b<<endl;
        }
        Area(double a,double b)
        {
            double c;
            c = a*b;
            cout<<"Area  of rectiangle is "<<c<<endl;
        }

};

int main()
{
    Area a,a1(3.5),a2(4.5,6.5);
}

/*
#include<iostream>
using namespace std;

class Area
{
    public:
    Area()
    {
        cout<<"Nothing To Print Here"<<endl;
    }
    Area(double a)
    {
        double b;
        b = a*a;
        cout<<"Area of Square is: "<<b<<endl;
    }
    Area(double a, double b)
    {
        double c;
        c = a*b;
        cout<<"Area of Rectangle is: "<<c<<endl;
    }
};

main()
{
    Area a,a1(3.5),a2(4.5,6.5);
}

*/

