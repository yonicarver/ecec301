#include <stdio.h>

int main(int argc, char** argv)
{
	int area, mid, end;

	printf("Enter phone number: [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &area, &mid, &end);

	printf("You entered: %d.%d.%d\n", area, mid, end);

	return 0;

}

