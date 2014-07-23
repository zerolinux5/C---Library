#include "swap.h"

template <class T> void mySwap(T& first, T& second)
{
	T temp = first;
	first = second;
	second = temp;
}
