#include <iostream>

using namespace std;

int main()
{
	
	int * ptr =new int[20];
	
	cout<<sizeof(*ptr);
	
	delete[] ptr;
	
	/*
	int * ptr =new int(20);
	
	cout<<(*ptr);*/
	
	return 0;
	
}
