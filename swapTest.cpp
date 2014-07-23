#include <iostream>
#include <string>
#include "swap.h"

using namespace std;

int main()
{
	int a = 5;
	int b = 7i;

	string s1("abcdef"), s2("1234");	

	cout << "a, b = " << a << " " << b << endl;
	swap(a,b);
	cout << "a, b = " << a << " " << b << endl;

	cout << "s1, s2 = " << s1 << " " << s2 << endl;
	swap(s1,s2);
	cout << "s1, s2 = " << s1 << " " << s2 << endl;
	return 0;
}
