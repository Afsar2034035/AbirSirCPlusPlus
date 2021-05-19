#include <iostream>
#include <cmath>
using namespace std;
class Series
{
    public:
        int i, n, sum = 0;
        void input();
        void result(int x);
        void result();
};

void Series :: input()
{
    cout<<"Enter a number :"<<endl;
    cin>>n;
}

void Series :: result(int x)
{
    for(i=1; i<=n; i++)
    {
        sum = sum + pow(i,i);
    }
}

void Series :: result()
{
    cout<<endl<<"The summation of following series :"<<endl;
    cout<<sum<<endl;
}

int main()
{
    Series ser;
    int x;
    ser.input();
    ser.result(x);
    ser.result();
}

