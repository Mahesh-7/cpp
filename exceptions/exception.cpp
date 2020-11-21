#include<iostream>

using namespace std;

int main()
{
	
	try
	{
		int age=15;
		
		if(age>=18)
		{
			cout<<"access granted"<<endl;
		}
		else
		{
			throw(age);  
			//throw 404;
		}
	}
	
	//catch(...)  
	catch(int age)  
	{
		cout<<"access denied"<<endl;
		cout<<"age is: "<<age<<endl;
	}
	
	
	return 0;
}
