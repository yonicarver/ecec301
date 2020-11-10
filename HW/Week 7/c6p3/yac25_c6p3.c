#include <stdio.h>

int gcd (int a, int b)
{
	int temp;

	while(a != 0) {
		temp = a;
		a = b % a;
		b = temp;
	}

	return b;
}

int main()
{
	int num, denom, g;

	printf("Enter a fraction: ");
	scanf("%i/%i", &num, &denom);

	g = gcd(num, denom);

	printf("In lowest terms: %i/%i\n", num/g, denom/g);
}
