#include <iostream>        //compile time overloading
using namespace std;     //Runtime overridding
class A
{
public:
    int a,b,c,d;
    void read();
    void sum(int p);
    void sum(int p,int q);
    void display();
};
void A :: read()
{
    cin>>a>>b;
}
void A :: sum(int p)
{
    c = a + b;
}
void A :: sum(int p,int q)
{
    d = a * b;
}
void A :: display()
{
    cout<<c<<"  "<<d<<endl;
}
class B
{
    public:
    int a,b,c,d;
    void read();
    void sum(int p);
    void display();
};
void B :: read()
{
    cin>>a>>b>>c;
}
void B :: sum(int p)
{
    d = a + b + c;
}
void B :: display()
{
    cout<<d<<endl;
}
int main()
{
    A m;
    B n;
    m.read();
    m.sum(5);
    m.sum(10,6);
    m.display();
    n.read();
    n.sum(5);
    n.display();
}

