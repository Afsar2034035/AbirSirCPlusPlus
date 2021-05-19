#include <iostream>
using namespace std;

class Add
{
	public:
		int a,b,c;
		void input();
		void result();
		~Add();
};

void Add :: input()
{
	cin>>a>>b;
}

void Add :: result()
{
	c = a + b;
}

Add :: ~Add()
{
	cout<<c<<endl;
}

int main()
{
	Add a;
	a.input();
	a.result();
}
