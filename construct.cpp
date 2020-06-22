#include <iostream>

using namespace std;

class construc 
{
	private:
		int a;
	public:
		int a1;
		construc()
		{
			cout<<"created"<<a1;
		}
		~construc()
		{
			cout<<"deleted"<<a1;
		}
};


int main()
{
	construc t;
	
	//t.a1=10;
	

	return 0;
}
