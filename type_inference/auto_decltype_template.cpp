
#include <bits/stdc++.h>

using namespace std;

template <class A, class B>

auto findMin(A a, B b) -> decltype(a < b ? a : b)
{
	return (a < b) ? a : b;
}


int main()
{

	cout << findMin(4, 3.44) << endl;


	cout << findMin(5.4, 3) << endl;

	return 0;
}

/*

int main()
{
	int x = 5;


	decltype(x) j = x + 5;

	cout << typeid(j).name();

	return 0;
}

*/

