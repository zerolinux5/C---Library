#include <iostream>
#include <string>
using namespace std;

string reverseString(string inputString)
{
	int i = inputString.length() - 1;
	string returnString;
	for(; i >= 0; i--){
		returnString += inputString[i];
	}
	return returnString;
}

string reverseStringR(string inputString)
{
	if (inputString.length() < 2){
		return inputString;
	} else {
		return  reverseStringR(inputString.substr(1,inputString.length())) + inputString[0];
	}
}

int main()
{	
	string s1("This is a string");
	cout << "s1 contains: " << s1 << endl;
	string s2 = reverseString(s1);
	cout << "s2 contains: " << s2 << endl;
	string s3 = reverseStringR(s1);
	cout << "s3 contains: " << s3 << endl;
	return 0;
} 
