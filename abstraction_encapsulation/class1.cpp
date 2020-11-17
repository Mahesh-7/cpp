//ref:geeks

#include <iostream>

using namespace std;


//abstraction : only shows essential info to users
//encapsulation :it consists data variables and methods in single class unit and hidding data operations and show only results

class Encapsulation 
{ 
	private: 
	
		// data hidden from outside world 
		int x; 
		
	public: 

		void set(int a) 
		{ 
			x =a; 
		} 
 
		int get()      //abstractions decide which want to show for user
		{ 
			return x; 
		} 
}; 

int main() 
{ 
	Encapsulation obj; 
	
	obj.set(5); 
	
	cout<<obj.get(); 
	
	return 0; 
} 

