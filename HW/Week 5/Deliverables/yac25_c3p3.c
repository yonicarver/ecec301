#include <stdio.h>

int main(int argc, char** argv)
{
	int gs1, group, pub, item, check;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &group, &pub, &item, &check);

	printf("GS1 Prefix: %d\n", gs1);
	printf("Group Identifier: %d\n", group);
	printf("Publisher Code: %d\n", pub);
	printf("Item Code: %d\n", item);
	printf("Check Digit: %d\n", check);

	return 0;
}	
