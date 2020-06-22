#include <iostream>

using namespace std;

class shape
{
	public :
		
		void setarea(int a)
		{
			area1=a;
		}
		
	protected:
		int area1;
};

class cost
{
	public:
		
		int getcost(int area)
		{
			return area*70;
		}	
};

class area:public shape,public cost   //derived class 
{
	public:
		
		int getarea()
		{
			return area1*area1;
		}	
};


int main()
{
	area ara;
	int areaz;
	ara.setarea(4);
	areaz=ara.getarea();
	cout<<"area:"<<ara.getarea()<<endl;
	cout<<"area-cost:"<<ara.getcost(areaz)<<endl; 
	return 0;
}

