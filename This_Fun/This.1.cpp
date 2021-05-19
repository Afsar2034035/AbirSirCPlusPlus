#include <iostream>
using namespace std;

class Person
{
public :
    int age;

    Person(int age)
    {
        this -> age = age;
    }

    void output()
    {
        cout<<"The age is : ";
        cout<<age<<endl;
    }
};

int main()
{
    Person a(20);
    a.output();
}
