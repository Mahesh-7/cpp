#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	string text;
	
	ifstream myfile("doc.txt");
	
	while(getline(myfile,text))
	{
		cout<<text;
	}
	
	myfile.close();
	
	return 0;
}

