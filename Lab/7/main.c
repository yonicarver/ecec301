#include <stdio.h>
#include "mymath.h"

int main (int argc, char** argv)
{
	unsigned int i;
	unsigned int elements = 1000;
	unsigned long fibs[elements];

	compute_fibs (fibs, &elements);

	for (i=0; i<elements; i++) {
		printf("fibs{%i]: %lu\n", i, fibs[i]);
	}
	printf("Displaying %u fibs\n", elements);
}
