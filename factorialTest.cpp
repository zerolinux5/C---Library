#include <iostream>

using namespace std;

#include "functions.h"

double factorialIt(int given)
{
	int factorialNum = given;
	for (int i = 1; i < given ;i++){
		factorialNum *= i;
	}
	return factorialNum;
}

double factorialR(int given)
{
	if(given == 1){
		return 1;
	} else {
		return given * factorialR(given-1);
	}
}

int main()
{
	int factIn = 10;
	double factOut = factorialIt(factIn);
	int factInR = 10;
	double factOutR = factorialIt(factInR);
	cout << "factin:" << factIn << " factOut:" << factOut << endl;
	cout << "factinR:" << factInR << " factOutR:" << factOutR << endl;
	return 1;
}
