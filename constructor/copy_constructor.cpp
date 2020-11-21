#include<iostream> 
#include<cstdio>
#include<string>
using namespace std; 

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

