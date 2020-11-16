#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    char arr[]="hello";
    char* ch = new char[10];
    ch=arr;
    cout << ch <<endl;
    
    int* i = new int;
    *i=22;
    cout << *i <<endl;
    
    int* i1 = new int(11);
    cout << *i1 <<endl;
    
    int ar[]={1,2,3,4,5};
    int* i2 = new(nothrow) int[20];  //nothrow used to throw errors for beyond mem usage,  nothrow is optional while mem allocation
    i2=ar;
   // i2[5]=55;  //beyond
    cout << *(i2+4) <<endl;
    
    //delete i;
    //delete i1;
    //delete[] ch;
    //delete[] i2;
    return 0;
}
