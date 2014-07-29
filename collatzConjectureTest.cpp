#include <iostream>

using namespace std;

#include "functions.h"

int main()
{
	int a = 3, b = 12, c = 2312;
	cout << "A:" << a << " B:" << b << " C:" << c << endl;
	int aStep = stepCounter(a);
	int bStep = stepCounter(b);
	int cStep = stepCounter(c);
	cout << "aStep:" << aStep << " bStep:" << bStep << " cStep:" << cStep << endl;
	return 0;
}
