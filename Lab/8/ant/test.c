#include <stdio.h>
#include "ant.h"

void report (struct ant* a)
{
	printf ("[Position: %i] ", ant_get_position(a));
	printf ("[Direction: %s]\n", ant_get_direction(a));
}

int main (int argc, char** argv)
{
	struct ant bob;

	init_ant (&bob, 10);
	report (&bob);
	ant_move (&bob, 5);
	ant_move (&bob, 2);
	report (&bob);
	ant_turn (&bob);
	ant_move (&bob, 20);
	report (&bob);
}
