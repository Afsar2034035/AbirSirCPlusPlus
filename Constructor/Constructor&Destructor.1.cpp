#include <iostream>
using namespace std;

class A
{
    public :
        int a,b,c;
        A()
        {
            cin>>a>>b;
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
}
