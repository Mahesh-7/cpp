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

class area:public shape
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
	ara.setarea(4);
	cout<<"area:"<<ara.getarea();
	return 0;
}





