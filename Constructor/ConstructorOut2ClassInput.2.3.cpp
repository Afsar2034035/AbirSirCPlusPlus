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

class Area2
{
	public:
		int a,b,c;
		Area2();
		void input();
		void result();
};

void Area2 :: input()
{
	cin>>a>>b;
}

void Area2 :: result()
{
	c = a + b;
	cout<<c<<endl;
}

Area2 :: Area2()
{
	input();
}

int main()
{
	Area a;
	a.result();
	
	Area2 b;
	b.result();
}
