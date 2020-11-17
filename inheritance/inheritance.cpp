//ref:w3school

#include <iostream>

using namespace std;


class vehicle  //base class
{
	public:
		
		string brand="yamaha";
		
		void type()
		{
			cout<<"race bike"<<endl;
		}
};

class bike:public vehicle  //derived class
{
	public:
		
		string model="R15-V3";
		
		//cout<<"fast"<<endl;  //cant execute inside derived class directly without help of function
		
		void review()
		{
				cout<<"super"<<endl;  //can run inside derived class by using function
		}
	
	
};


int main()
{
	bike obj; //obj created for derived class
	
	obj.type();
	cout<<obj.brand<<endl;
	cout<<obj.model<<endl;
	obj.review();	
	
	//cout<<vehicle::brand;  //invalid
	
	return 0;
}
