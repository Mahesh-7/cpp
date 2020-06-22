#include <iostream>


class Base
{
	public:
		Base();
		~Base();
};

Base::Base()
{
	std::cout<<"Base constructor!"<<std::endl;
}

Base::~Base()
{
	std::cout<<"Base destructor!"<<std::endl;
}

class Base1 : public Base
{
	public:
		Base1();
		~Base1();
};

Base1::Base1()
{
	std::cout<<"Base1 constructor!"<<std::endl;
}

Base1::~Base1()
{
	std::cout<<"Base1 destructor!"<<std::endl;
}


class Derived : public Base1,public Base
{
	public:
		Derived();
		~Derived();
};

Derived::Derived()
{
	std::cout<<"Derived constructor!"<<std::endl;
}

Derived::~Derived()
{
	std::cout<<"Derived destructor!"<<std::endl;
}

int main()
{
	Derived d2;	
}
