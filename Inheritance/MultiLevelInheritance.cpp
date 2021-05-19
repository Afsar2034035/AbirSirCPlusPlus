//Multi level -> 1 super class , 2 sub class

#include <iostream>
using namespace std;

class GrandFather
{
    public:
        void GndFather()
        {
            cout<<"Grand Father comes frist."<<endl;
        }
};

class Father : public GrandFather
{
    public:
        void Fher()
        {
            cout<<"Then Father comes."<<endl;
        }
};

class Child : public Father
{
    public:
        void Cld()
        {
            cout<<"Finally Child comes."<<endl;
        }
};

int main()
{
    Child m;
    m.GndFather();
    m.Fher();
    m.Cld();
}

//Using constractor

/*#include <iostream>
using namespace std;

class GrandFather
{
    public:
        GrandFather()
        {
            cout<<"Grand Father comes frist."<<endl;
        }
};

class Father : public GrandFather
{
    public:
        Father()
        {
            cout<<"Then Father comes."<<endl;
        }
};

class Child : public Father
{
    public:
        Child()
        {
            cout<<"Finally Child comes."<<endl;
        }
};

int main()
{
    Child m;
}*/
