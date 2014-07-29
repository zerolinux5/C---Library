#include "functions.h"

double factoriallIt(int given)
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
