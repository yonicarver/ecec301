#include <stdio.h>
#include "strlib.h"

void check_compare (char* a, char* b)
{
	if (!my_strcmp (a, b)) {
		printf ("Strings match!\n");
	} else {
		printf ("Strings DON'T match!\n");
	}
}

int main (int argc, char** argv)
{
	char foo[] = "Foo";
	char empty[] = "";
	char str1[] = "ECE Programmers are the best!";
	char str2[] = "ECE Programmers are the best!";

	printf ("lenfth of foo: %i\n", my_strlen(foo));
	printf ("length of empty: %i\n", my_strlen(empty));
	printf ("length of str1: %i\n", my_strlen(str1));
	printf ("length of str2: %i\n", my_strlen(str2));

	printf ("--------------------------\n");
	printf ("Compareing foo to empty: ");
	check_compare (foo, empty);
	printf("Comparing str1 to str2: ");
	check_compare (str1, str2);

	return 0;
}
