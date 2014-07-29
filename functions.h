#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__
#include <iostream>
#include <string>
using namespace std;

template <class T> void mySwap(T& first, T& second);
string reverseString(string inputString); 
string reverseStringR(string inputString);
double tempConverter(double temp, string from, string to);
double massConverter(double mass, string from, string to);
int stepCounter(int inputNumber);
double factorialIt(int given);
double factorialR(int given);
#endif
