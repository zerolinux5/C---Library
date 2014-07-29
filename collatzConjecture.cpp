#include "functions.h"

int stepCounter(int inputNumber)
{
        if (inputNumber == 1)
        {
                return 1;
        }
        if (inputNumber % 2 == 0)
        {
                return 1 + stepCounter(inputNumber / 2);
        } else {
                return 1 + stepCounter(inputNumber * 3 + 1);
        }
}
