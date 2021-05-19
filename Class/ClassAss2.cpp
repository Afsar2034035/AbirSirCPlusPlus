#include <iostream>
#include <cmath>
using namespace std;
class Series
{
    public:
        long long int i, n, sum = 0;
        void input();
        void result(long long int x);
        void result();
};

void Series :: input()
{
    cout<<"Enter a number :"<<endl;
    cin>>n;
}

void Series :: result(long long int x)
{
    for(i=2; i<=n; i+=6)
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
    long long int x;
    ser.input();
    ser.result(x);
    ser.result();
}

