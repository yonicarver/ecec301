#include <stdio.h>

void store_zeros(int *a, int n) {

		int x;

		for (x = 0; x < n; x++)
			*a++ = 0;
}

int main() {

	int a[10], i;
	store_zeros(a, 10);
	for (i = 0; i < 10; i++) {
		printf("%i : a = %i\n", i, a[i]);
			  }
}
