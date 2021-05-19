#include <iostream>
using namespace std;

class A
{
	public:
		int a,b,c;
		void input();
		friend void add(A m);
};

void A :: input()
{
	cout<<"Enter 1st number : ";
	cin>>a;
	cout<<endl<<"Enter 2nd number : ";
	cin>>b;
}

void add(A m)
{
	m.c = m.a + m.b;
//	cout<<endl<<"The sum of "<<a<<" and "<<b<<" are : ";
	cout<<m.c<<endl;
}

int main()
{
	A f;
	f.input();
	add(f);
}
