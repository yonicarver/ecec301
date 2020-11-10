#include <stdio.h>
#include <stdlib.h>

struct point {
	int x, y;
};

struct rectangle {
	struct point upper_left, lower_right;
};

//typedef enum {false, true} bool;

int area(struct rectangle* r) {
	// compute the area of rectangle r
	int height = r->upper_left.y - r->lower_right.y;
	int width = r->lower_right.x - r->upper_left.x;

	return abs(height * width);
}

struct point center(struct rectangle* r) {
	// compute the center of r
	struct point center;

	center.x = (r->lower_right.x + r->upper_left.x) / 2;
	center.y = (r->upper_left.y + r->lower_right.y) / 2;

	return center;
}

struct rectangle move(struct rectangle r, int x, int y) {
	// move rectangle r by coordinates (x, y)
	r.upper_left.x += x;
	r.upper_left.y += y;

	r.lower_right.x += x;
	r.lower_right.y += y;

	return r;
}

int inside(struct point* p, struct rectangle* r) {
	// determine whether point p is inside rectangle r
	if (p->x < r->lower_right.x && p->x > r->upper_left.x)
		if (p->y < r->upper_left.y && p->y > r->lower_right.y)
			return 1;
	else
		return 0;
}


int main() {
	struct rectangle r, mv;
	struct point p1, p2, ctr;

	p1.x = 2;
	p1.y = 3;

	p2.x = 1;
	p2.y = 5;

	r.upper_left.x = 0;
	r.upper_left.y = 4;

	r.lower_right.x = 4;
	r.lower_right.y = 0;

	printf("point 1: (%i, %i)\n", p1.x, p1.y);
	printf("point 2: (%i, %i)\n", p2.x, p2.y);

	printf("rectangle coords 1 (ul): (%i, %i)\n", r.upper_left.x, r.upper_left.y);
	printf("rectangle coords 1 (lr): (%i, %i)\n", r.lower_right.x, r.lower_right.y);

	if (inside(&p1, &r))
		printf("point inside rectangle\n");
	else
		printf("point not inside rectangle\n");

	if (inside(&p2, &r))
		printf("point inside rectangle\n");
	else
		printf("point not inside rectangle\n");

	printf("Area: %i\n", area(&r));

	ctr = center(&r);
	printf("center: (%i, %i)\n", ctr.x, ctr.y);

	mv = move(r, 3, 3);
	printf("rect moved by (3, 3): ul--(%i, %i), lr--(%i, %i)\n",
		  mv.upper_left.x, mv.upper_left.y, mv.lower_right.x, mv.lower_right.y);
}
