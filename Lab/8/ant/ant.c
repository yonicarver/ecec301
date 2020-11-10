#include <stdio.h>
#include "ant.h"



void init_ant (struct ant* a, int position)
{
	a->position = position;
	a->direction = 1;
}

void ant_turn (struct ant* a)
{
	if (a->direction)
		a->direction = 0;
	else
		a->direction = 1;
}

void ant_move (struct ant* a, unsigned int distance)
{
	if (a->direction)
		a->position += distance;
	else
		a->position -= distance;
}

int ant_get_position (struct ant* a)
{
	return a->position;
}

char* ant_get_direction (struct ant* a)
{
	if (a->direction)
		return "right";
	else
		return "left";
}
