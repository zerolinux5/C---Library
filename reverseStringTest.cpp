#include <iostream>
#include <string>

using namespace std;

#include "functions.h"

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
