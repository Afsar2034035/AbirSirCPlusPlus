#include <iostream>
using namespace std;

class Area
{
  public:
  	double a,b,c;
  	Area();
  	void result();
	
};

void Area :: result()
{
	c = a * b;
	cout<<c<<endl;
}

Area :: Area()
{
	cin>>a>>b;
}

int main()
{
	Area a;
	a.result();	
}
