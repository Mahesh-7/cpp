#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream myfile("doc.txt");
	
	myfile << "hello world";
	
	myfile.close();
	
	return 0;
}

