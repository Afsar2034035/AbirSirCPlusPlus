#include <iostream>
using namespace std;

class A
{
    public :
	int a,b,c;
        A()
        {
            cin>>a>>b;
        }
        void add()
        {
            c = a + b;
            cout<<c<<endl;
        }
};

int main()
{
    A n;
    n.add();
}
