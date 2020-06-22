#include <iostream>

// in operator overloading first operand passed as a first parameter.

class Test
{
	
};

Test operator+(Test x,Test y)
{
	std::cout << "Test and Test" << std::endl;
}

Test operator+(Test x,int y)
{
	std::cout << "Test class and int" << std::endl;
	
	return x;
}

Test operator+(int y,Test x)
{
	std::cout << "int and Test class" << std::endl;
	
	return x;
}

int main()
{
	Test x;
	
	x = x + 10 + x + x + 12;
}
