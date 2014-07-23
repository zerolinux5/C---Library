#include "swap.h"

template <class T> void mySwap(T& first, T& second)
{
	first ^= second;
	second ^= first;
	first ^= second;
}
