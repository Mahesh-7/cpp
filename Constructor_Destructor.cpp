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
	public:
		int x; 
		int y;
	
	public:
		Test1(int a,int b){
			cout<<"Object created"<<a<<b<<endl;
		}
		~Test1()
		{
			cout<<"Object erased!"<<endl;
		}
};

/* 
Test1::Test1(int a,int b):x(a),y(b)
{
	cout<<"Object created"<<a<<b<<endl;
}

Test1::~Test1()
{

	cout<<"Object erased!"<<endl;
}
*/

void TestFunction1()
{
	Test1 t1(2,3);
	//t1.Test1(1,2);
}

int main()
{
	TestFunction1();
}
