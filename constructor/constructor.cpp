//ref:w3school

#include <iostream>

using namespace std;

class mobile  //user global class definition
{
	public:  //access specifier  ,,  by default private if we not used public keyword
		
	string brand; //attributes/variables
	
	string model;
	
	int price;
	
	mobile(string msg); //constructor declarationw with arg ,it doesnt need return-types
	
/*	
	mobile() //local constructor with function declaration and definition
	{
		cout<< "welcome to mobile world"<<endl;
	}
	
*/
	
	void mob_spec(string msg);//method/function declaration with arg
	
	
/*	
	void mob_spec(string msg)
	{
		cout<<msg<<endl<<brand<<" "<<model<<" "<<price<<endl;  //attribute access inside class
	}
*/

	
}mob("welcome to mobile world");   // Create an global object of MyClass with constructor argument


void mobile::mob_spec(string msg)
{
	cout<<msg<<endl<<mob.brand<<" "<<mob.model<<" "<<mob.price<<endl;    //attribute access outside class
}

mobile::mobile(string msg)  //constructor no need to call from anywhere ,it call automatically when class obj created
{
	cout<<msg <<endl;
}

int main( )

{
//	mobile mob;   // Create an local object of MyClass
	mob.brand="mi";
	mob.model="7s";
	mob.price=10000;
	
	//cout<<mob.brand<<" "<<mob.model<<" "<<mob.price<<endl;   //attribute access outside class without method
	
	mob.mob_spec("latest mobiles");  // Call the method
		
	return 0;
}
