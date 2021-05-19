#include <iostream>
using namespace std;

class Area
{
	public:
	double a,b,c,d;
	Area()
	{
		cin>>a>>b;
		c = a + b;
		cout<<c<<endl;
	}	
	
	Area(int p)
	{
		cin>>a;
		c = a * a;
		cout<<c<<endl;
	}
	
	Area(int p, int q)
	{
		cin>>a>>b>>c;
		d = (a + b + c)/3;
		cout<<d<<endl;
	}
};

int main()
{
	Area m;
	Area n(10);
	Area t(5,10);
}
