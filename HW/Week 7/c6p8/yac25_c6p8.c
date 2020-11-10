#include <stdio.h>

int main()
{
	int days, start_day, day;

	printf("Enter number of days in month: ");
	scanf("%d", &days);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &start_day);

	for (day = 1; day < start_day; ++day)
		printf("   ");

	for (day = 1; day <= days; ++day) {
		if (day <= 9)
			printf(" ");

		printf("%i", day);

		if ((day + start_day - 1) % 7 == 0)
			printf("\n");
		else
			printf(" ");
	}

	printf("\n");

	return 0;
}
