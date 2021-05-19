#include <iostream>
using namespace std;

class Person
{
    public:
        Person()
        {
            cout<<"Age is By default 22"<<endl;
        }
        Person(int a)
        {
            cout<<"Age is now 30"<<endl;
        }
};

int main()
{
    Person p,p1(30);
}
