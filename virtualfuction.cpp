#include <iostream>

class Base
{
	public:
		void Print(void);
};

void Base::Print(void)
{
	std::cout << "Base class!"<<std::endl;
}

class Dev_1 : public Base
{
	public:
		void Print(void);	
};

void Dev_1::Print(void)
{
	std::cout << "derived-1 class!"<<std::endl;
}

class Dev_2 : public Dev_1
{
	public:
		void Print(void);
};

void Dev_2::Print(void)
{
	std::cout << "derived-2 class!"<<std::endl;
}

int main()
{
	Dev_2 d2;
	Dev_1 *d1 = &d2;
	Base *b = &d2;
	
	d1->Print();
	b->Print();
}
