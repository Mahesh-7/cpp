 
#include <iostream> 
#include <vector> 

using namespace std; 

int main() 
{ 
	vector<int> g;
	
	for(int i=1;i<=5;i++)
	{
	    g.push_back(i);
	}
	for(int i=4;i<=5;i++)
	{
	    g.pop_back();
	}
	for(auto i=g.crbegin();i!=g.crend();i++)
	{
	    cout<<*i<<" ";
	}
		
	return 0; 
} 

