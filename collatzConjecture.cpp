#include <iostream>

using namespace std;

int stepCounter(int inputNumber)
{
	if (inputNumber == 1)
	{
		return 1;
	}
	if (inputNumber % 2 == 0)
	{
		return 1 + stepCounter(inputNumber / 2);
	} else {
		return 1 + stepCounter(inputNumber * 3 + 1);
	}
}

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
