#include <iostream>


using namespace std;  // if not written -> "accessed function or data" is not declared in this scope

/*
Syntax:

Class ClassName
{

};(Semicolon)

*/


class Class1
{
	private:
		int Data;
		int Data1;
	
	public:
		int a1;
		void Set_Data(int temp);
		int Get_Data(void);
		
		void Set_Data1(int Temp)
		{
			Data1 = Temp;
		}
		
		int Get_Data1(void)
		{
			return Data1;
		}
};

void Class1::Set_Data(int temp)
{
	Data = temp;
}

int Class1::Get_Data(void)
{
	return Data;
}


int main()
{
	Class1 c1;
	c1.a1 = 10;
	
	c1.Set_Data(15);
	
	c1.Set_Data1(25);
	
	cout<<c1.a1<<endl;
	cout<<c1.Get_Data()<<endl;
	cout<<c1.Get_Data1()<<endl;
}


