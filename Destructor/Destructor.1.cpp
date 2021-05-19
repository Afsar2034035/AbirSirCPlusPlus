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
        ~A()
        {
            cout<<c<<endl;
        }
};

int main()
{
    A m;
    m.input();
    m.add();
}
