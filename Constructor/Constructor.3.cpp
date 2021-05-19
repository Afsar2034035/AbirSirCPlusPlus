#include <iostream>
using namespace std;

class A
{
    public :
        int a,b,c;
        void input()
        {
            cin>>a>>b;
        }
        void add()
        {
            c = a + b;
        }
        void output()
        {
            cout<<c<<endl;
        }
        A()
        {
            input();
        }
};

int main()
{
    A m;
    m.add();
    m.output();
}
