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

int main()
{	
	string s1("This is a string");
	cout << "s1 contains: " << s1 << endl;
	string s2 = reverseString(s1);
	cout << "s2 contains: " << s2 << endl;
	return 0;
} 
