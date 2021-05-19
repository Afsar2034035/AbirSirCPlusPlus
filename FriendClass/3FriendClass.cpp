#include <iostream>
using namespace std;

class B;
class C;
class A
{
	public:
		int x;
		void input();
		friend void add (A a , B b , C c);
};

class B
{
	public:
		int y;
		void input();
		friend void add(A a , B b , C c);
};

class C
{
	public:
		int z;
		void input();
		friend void add(A a , B b , C c);
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

void C :: input()
{
	cout<<endl<<"Enter 3rd Number : ";
	cin>>z;
}

void add(A a , B b , C c)
{
	int m;
	cout<<endl<<"The sum of three number : ";
	m = a.x + b.y + c.z;
	cout<<m;
}

int main()
{
	A p;
	B q;
	C r;
	p.input();
	q.input();
	r.input();
	add(p,q,r);
}

