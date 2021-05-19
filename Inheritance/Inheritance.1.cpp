#include <iostream>
using namespace std;

class Animal
{
	public:
		void eat()
		{
			cout<<"It can eat."<<endl;
		}
		
		void walk()
		{
			cout<<"It can walk."<<endl;
		}
};

class Dog : public Animal
{
	public:
		void bark()
		{
			cout<<"It can bark."<<endl;
		}
};

int main()
{
	Dog a;
	a.eat();
	a.walk();
	a.bark();
}
