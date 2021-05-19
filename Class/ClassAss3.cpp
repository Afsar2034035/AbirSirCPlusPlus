#include <iostream>
#include <cmath>
using namespace std;
class Series
{
    public:
        long long int i, n, sum;
        void input();
        void result();
        void result(long long int x);
};

void Series :: input()
{
    cout<<"Enter a number :"<<endl;
    cin>>n;
}

void Series :: result()
{
    sum = 0;
    for(i=1; i<=n; i++)
    {
        sum = sum + pow(i,i);
    }
    cout<<endl<<"The summation of following 1st series :"<<endl;
    cout<<sum<<endl;
}

void Series :: result(long long int x)
{
    sum = 0;
    for(i=2; i<=n; i+=6)
    {
        sum = sum + pow(i,i);
    }
    cout<<endl<<"The summation of following 2nd series :"<<endl;
    cout<<sum<<endl;
}

int main()
{
    Series ser;
    long long int x;
    ser.input();
    ser.result();
    ser.result(x);
}

