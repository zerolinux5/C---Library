#include <iostream>
#include "swap.h"

using namespace std;

int main()
{
	int a = 5;
	int b = 7;
	cout << "a, b = " << a << " " << b << endl;
	swap(a,b);
	cout << "a, b = " << a << " " << b << endl;
	return 0;
}
