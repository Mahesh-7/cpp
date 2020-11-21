#include<iostream> 
using namespace std; 
/*
class Point 
{ 
private: 
	int x, y; 
public: 
	Point(int x1, int y1) { x = x1; y = y1; } 

	// Copy constructor 
	Point(const Point &p2) {x = p2.x; y = p2.y; } 

	int getX()		 { return x; } 
	int getY()		 { return y; } 
}; 

int main() 
{ 
	Point p1(10, 15); // Normal constructor is called here 
	Point p2 = p1; // Copy constructor is called here 

	// Let us access values assigned by constructors 
	cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY(); 
	cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY(); 

	return 0; 
}
*/

class point
{
	int x,y;
	
	public:
		
		point(int a,int b){ x=a; y=b;}
		
		point(const point &p2){ x=p2.x; y=p2.y;} //copy constructor
		
		int getx()		{	return x;	}
		int gety()		{	return y;	}
		
};


int main()
{
	point p1(2,4);
	
	point p2=p1; //copy constructor

	/* access from parameterized constructor */
	cout<<p1.getx()<<endl;
	cout<<p1.gety()<<endl;
	/* access from copy constructor */
	cout<<p2.getx()<<endl;
	cout<<p2.gety()<<endl;
	

	
	return 0;
}

