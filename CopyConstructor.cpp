#include <iostream>

using namespace std;

class Test
{
	private:
		int a;
		int b;
	
	public:
		Test(int x,int y);
		Test(const Test &x);
		int GetAvalue();
		int GetBvalue();	
};

Test::Test(const Test &x)
{
	a = x.a;
	b = x.b;
}

Test::Test(int x,int y)
{
	a = x;
	b = y;
}

int Test::GetAvalue()
{
	return a;
}

int Test::GetBvalue()
{
	return b;
}

int main()
{
	Test i(10,12);
	
	cout<<i.GetAvalue()<<endl;
	
	Test j(i);
	
	cout<<j.GetAvalue()<<endl<<j.GetBvalue();
}
