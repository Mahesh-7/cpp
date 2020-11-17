//ref:geeks
#include <iostream> 
using namespace std; 

// base class 
class Vehicle 
{ 

public: 
	Vehicle() 
	{ 
	cout << "This is a Vehicle" << endl; 
	} 
}; 

//base class 
class Fare 
{ 
	public: 
	Fare() 
	{ 
		cout<<"Fare of Vehicle\n"; 
	} 
}; 

// first sub class 
class Car: public Vehicle 
{ 
	public: 
	Car() 
	{ 
		cout<<"this is car\n"; 
	} 
}; 

// second sub class 
class Bus: public Vehicle, public Fare,public Car
{ 
	
}; 

// main function 
int main() 
{ 

	Bus obj2; 

	return 0; 
} 

