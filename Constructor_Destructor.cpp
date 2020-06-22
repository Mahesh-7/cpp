#include <iostream>

using namespace std;

class Test
{
	public:
		Test();
		~Test();
		
};

Test::Test()
{
	cout<<"Object Created!";
}

Test::~Test()
{
	cout<<"Object Erased!";
}

void TestFunction()
{
	Test t1;
}

class Test1
{
	private:
		int x; 
		int y;
	
	public:
		Test1(int a,int b);
		~Test1();
};

Test1::Test1(int a,int b):x(a),y(b)
{
	cout<<"Object created";
}

Test1::~Test1()
{
	cout<<"Object erased!";
}



void TestFunction1()
{
	Test1 t1(1,2);
}

int main()
{
	TestFunction1();
}
