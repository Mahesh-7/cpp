#include <iostream>

class A
{
	private:
		int a;
	
	public:
		A(int a);
};


A::A(int a)
{
	std::cout<<"The value of A is : " <<a<<std::endl;
}

/*End of class A*/

class B : public A
{
	private:
		int b;
	
	public:
		B(int a, int b);
};

B::B(int a,int b) :  A(a)
{
	std::cout<<"The value of b is : " << b << std::endl;
}

/*End of class B*/

class C : public B
{
	private:
		int c;
	
	public:
		C(int a, int b, int c);
};


C::C(int a,int b, int c) :  B(a,b)
{
	std::cout<<"The value of c is : " << c <<std::endl;
}

/*End of class C*/

int main()
{
	C d(1,2,3);
}



