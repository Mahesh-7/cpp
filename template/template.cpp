#include <iostream> 

using namespace std; 



template<typename t>  //template works for all data types by replace template name

t print(t a,t b)
{
	return ((a>b)?a:b);
}
int main()
{
	cout<<print<int>(5,7)<<endl; // Call myMax for int 
	cout<<print<double>(5.5,7.0)<<endl; // call myMax for double 
	cout<<print<char>('a','z')<<endl; // call myMax for char
}


/*
template<class T, class U> 
class A { 
	T x; 
	U y; 
public: 
	A() { cout<<"Constructor Called"<<endl; } 
}; 

int main() 
{ 
	A<char, char> a; 
	A<int, double> b; 
	return 0; 
} 
*/
/*
template <typename T> 
class Array { 
private: 
	T *ptr; 
	int size; 
public: 
	Array(T arr[], int s); 
	void print(); 
}; 

template <typename T> 
Array<T>::Array(T arr[], int s) { 
	ptr = new T[s]; 
	size = s; 
	for(int i = 0; i < size; i++) 
		ptr[i] = arr[i]; 
} 

template <typename T> 
void Array<T>::print() { 
	for (int i = 0; i < size; i++) 
		cout<<" "<<*(ptr + i); 
	cout<<endl; 
} 

int main() { 
	int arr[5] = {1, 2, 3, 4, 5}; 
	Array<int> a(arr, 5); 
	a.print(); 
	return 0; 
} 
*/

