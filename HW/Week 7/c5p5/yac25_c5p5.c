#include <stdio.h>


int main()
{
	float income, tax_due;
	printf("Enter taxable income: $");
	scanf("%f", &income);

	if (income >= 0 && income <= 750)
		tax_due = 0.01*income;
	else if (income <= 2250)
		tax_due =  7.50 + 0.02*(income-750);
	else if (income <= 3750)
		tax_due =  37.50 + 0.03*(income-2250);
	else if (income <= 5250)
		tax_due =  82.50 + 0.04*(income-3750);
	else if (income <= 7000)
		tax_due =  142.50 + 0.05*(income-5250);
	else
		tax_due =  230.00 + 0.06*(income-7000);

	printf("The tax due on $%g is $%g\n", income, tax_due);


}
