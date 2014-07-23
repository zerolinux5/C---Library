#include <iostream>
#include <string>
using namespace std;

string reverseString(string inputString)
{
	return inputString;
}

int main()
{	
	string s1("This is a string");
	cout << "s1 contains: " << s1 << endl;
	string s2 = reverseString(s1);
	cout << "s2 contains: " << s2 << endl;
	return 0;
} 
