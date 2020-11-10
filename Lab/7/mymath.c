#include "mymath.h"
#include <limits.h>


void compute_fibs(unsigned long* fibs, unsigned int* N)
{
	unsigned int i;

	fibs[0] = 0;
	fibs[1] = 1;

	for (i = 2; fibs[i-2] < (ULONG_MAX - fibs[i-1]) && i < *N; ++i)
		fibs[i] = fibs[i-1] + fibs[i-2];

	*N = i;


}

