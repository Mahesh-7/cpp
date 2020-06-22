

#include <iostream>

class Base
{
	public:
		void Print(void);
};

class Derived : public Base
{
	public:
		void Print(void);
};

void Base::Print(void)
{
	std::cout <<"Base class function\n";
}

void Derived::Print()
{
	std::cout <<"Derived Class function\n";
}


int main(void)
{
	Derived d;
	Base *b = &d;
	
	b->Print(); 
	
	d.Print();
}
