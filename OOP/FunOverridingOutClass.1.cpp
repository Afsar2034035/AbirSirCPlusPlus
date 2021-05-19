#include <iostream>
using namespace std;

class A
{
public :
    int a,b,c;
    void read();
    void sum();
    void display();
};

void A :: read()
{
    cin>>a>>b;
}
void A :: sum()
{
    c = a + b;
}
void A :: display()
{
    cout<<c<<endl;
}

class B
{
  public :
      int a,b,c,d;
      void read();
      void sum();
      void display();
};

void B :: read()
{
    cin>>a>>b>>c;
}
void B :: sum()
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
    m.sum();
    m.display();
    n.read();
    n.sum();
    n.display();
}
