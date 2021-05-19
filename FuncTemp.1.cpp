#include <iostream>
using namespace std;

template <class temp>

temp add(temp a, temp b)
{
    return a+b;
}

int main()
{
    cout<<"Sum of two integer number is : "<<add(10,20)<<endl<<endl;
    cout<<"Sum of two float number is : "<<add(10.3,20.5)<<endl;
}
