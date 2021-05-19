#include <iostream>
using namespace std;

class A
{
  public:
      int a,b,c;
      void read()
      {
          cin>>a>>b;
      }
      void sum()
      {
          c = a + b;
      }
      void display()
      {
          cout<<c<<endl;
      }

};

class B
{
    public:
        int a,b,c,d;
        void read()
        {
            cin>>a>>b>>c;
        }
        void sum()
        {
            d = a + b + c;
        }
        void display()
        {
            cout<<d<<endl;
        }

};

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
