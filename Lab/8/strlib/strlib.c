#include <stdio.h>
#include "strlib.h"

int my_strlen(char* string)
{
	int x = 0;

	while(string[x] != '\0')
	{
		x++;
	}

	return x;

}

int my_strcmp(char* a, char* b)
{
	int x = 0;

	while(a[x] == b[x])
	{
		if (a[x]=='\0' || b[x]=='\0')
			break;
		x++;
	}
		if (a[x]=='\0' && b[x]=='\0')
			return 0;
		else
			return 1;
}


