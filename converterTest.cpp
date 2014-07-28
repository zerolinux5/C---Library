#include <iostream>
#include <string>

using namespace std;

#include "functions.h"

int main()
{
	double temperature = 100;
	double k = tempConverter(temperature, "C", "K");
	double C = tempConverter(temperature, "K", "C");
	double F = tempConverter(temperature, "K", "F");
	cout << "K:" << k << endl; 
	cout << "C:" << C << endl; 
	cout << "F:" << F << endl; 
	return 0;
}

