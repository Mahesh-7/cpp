#include <iostream>

using namespace std;

namespace val
{
	int a=10;
}

typedef struct demo
{
	int a;
	int b;
}demo;

int a=11;

void print()
{
	cout<<a<<endl;
}

int main()
{
	int a=13,b;
	
	demo o;
	o.a=111;
	
	cout<<o.a<<endl;
	
	print();
	
	cout<<"enter value:\n";
	
	cin>>b;
	
	cout<<b<<endl;
	
	//std::cout<<"hello world";
	
	//cout<<"hello world"<<endl;
	
	cout<<a<<endl;
	
	cout<<val::a<<endl;
}


