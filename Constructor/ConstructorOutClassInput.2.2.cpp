#include <iostream>
using namespace std;

class Area
{
  public:
  	double a,b,c;
  	void input();
    	Area();
    	void result();	
	
};

void Area :: input()
{
	cin>>a>>b;
}

void Area :: result()
{
	c = a * b;
	cout<<c<<endl;
}

Area :: Area()
{
	input();
}

int main()
{
	Area m;
	m.result();
}
