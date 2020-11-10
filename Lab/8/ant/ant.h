#ifndef _ant_h_
#define _ant_h_

struct ant {
	int position;
	int direction;
};

void init_ant (struct ant* a, int position);
void ant_turn (struct ant* a);
void ant_move (struct ant* a, unsigned int distance);
int ant_get_position (struct ant* a);
char* ant_get_direction (struct ant* a);

#endif /* _ant_h_ */
