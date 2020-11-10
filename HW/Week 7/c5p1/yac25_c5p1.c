#include <stdio.h>


int main()
{
	int number, num_digits = 0;

	printf("Enter a number: ");
	scanf("%i", &number);

	if (number >= 0 && number <= 9)
		num_digits = 1;
	else if (number >= 10 && number <= 99)
		num_digits = 2;
	else if (number >= 100 && number <= 999)
		num_digits = 3;
	else if (number >= 1000 && number <= 9999)
		num_digits = 4;

	printf("The number %i has %i digit(s)\n", number, num_digits);
}
