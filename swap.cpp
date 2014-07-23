#include "swap.h"

template <class T> void mySwap(T& first, T& second)
{
	first = first ^ second;
	second = first ^ second;
	first = first ^ second;
}
