#include "functions.h"

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
