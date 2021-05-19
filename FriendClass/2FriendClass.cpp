#include <iostream>
using namespace std;

class B;
class A
{
	public:
		int x;
		void input();
		friend void add(A a , B b);
};

class B
{
	public:
		int y;
		void input();
		friend void add(A a , B b);
};

void A :: input()
{
	cout<<"Enter 1st Number : ";
	cin>>x;
}

void B :: input()
{
	cout<<endl<<"Enter 2nd Number : ";
	cin>>y;
}

void add(A a , B b)
{
	int m;
	m = a.x + b.y;
	cout<<endl<<"The sum of two Number : ";
	cout<<m<<endl;
}

int main()
{
	A p;
	B q;
	p.input();
	q.input();
	add(p,q);
}
