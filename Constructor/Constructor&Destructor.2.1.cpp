#include <iostream>
using namespace std;

class Add
{
	public:
		int a,b,c;
		Add();
		~Add();
};

Add :: Add()
{
	cin>>a>>b;
	c = a + b;
}

Add :: ~Add()
{
	cout<<c<<endl;
}

int main()
{
	Add a;
}
