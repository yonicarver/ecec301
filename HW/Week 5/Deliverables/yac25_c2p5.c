#include <stdio.h>

int main(void)
{
	int x, poly;
	printf("Please enter a value for 'x': ");
	scanf("%d", &x);

	poly = (3*x*x*x*x*x)+(2*x*x*x*x)-(5*x*x*x)-(x*x)+(7*x)-(6);

	printf("Answer: %d\n", poly);

	return 0;
}
