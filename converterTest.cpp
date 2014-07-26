#include <iostream>
#include <string>

using namespace std;

double tempConverter(double temp, string from, string to)
{
	if(from.compare("K") == 0){
		double kToC = temp - 273.15;
		if(to.compare("C") == 0){
			return kToC;
		} else {
			return (kToC * 1.8 + 32);
		}
	} else if (from.compare("C") == 0){
		if(to.compare("K") == 0){
			return (temp+273.15);
		} else {
			return (temp * (9/5) + 32);
		}
	} else {
		if (to.compare("C") == 0){
			return ((temp - 32) * (5/9));
		} else {
			return ((5/9)*(temp-32) + 273.15);
		}
	}
}

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

