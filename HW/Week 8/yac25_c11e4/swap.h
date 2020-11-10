#ifndef _swap_h
#define _swap_h

void swap(int *p, int *q) {

	int addr_temp;
	addr_temp = *p;
	*p = *q;
	*q = addr_temp;

}

#endif
