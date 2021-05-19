#include <iostream>
using namespace std;

int main()
{
    try
    {
        int a,b;
        double c;
        cout<<"Enter two number : ";
        cin>>a>>b;
        if(b==0)
        {
            throw -1;
        }
        c = (double)a/b;
        cout<<endl<<"The Division of two number : ";
        cout<<c<<endl;
    }

    catch (int a)
    {
        cout<<endl<<"Catch an Error! Try again."<<endl;
    }
}


