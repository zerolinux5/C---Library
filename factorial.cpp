#include <iostream>

using namespace std;

double factorialIt(int given)
{
	int factorialNum = given;
	for (int i = 1; i < given ;i++){
		factorialNum *= i;
	}
	return factorialNum;
}

int main()
{
	int factIn = 10;
	double factOut = factorialIt(factIn);
	cout << "factin:" << factIn << " factOut:" << factOut << endl;
	return 1;
}
