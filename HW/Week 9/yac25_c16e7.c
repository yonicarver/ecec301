#include <stdio.h>
#include <stdlib.h>

struct fraction {
	int numerator;
	int denominator;
};


int gcd(int a, int b) {
	a = abs(a);
	b = abs(b);
	if (a == 0 || b == 0)
		return 0;
	if (a == b)
		return a;
	if (a > b)
		return gcd(a-b, b);
	return gcd(a, b-a);
}
void reduce_fract(struct fraction* f) {
	// reduce fraction f
	int gcd_r;

	gcd_r = gcd(f->numerator, f->denominator);

	f->numerator /= gcd_r;
	f->denominator /= gcd_r;


}


void add_fract(struct fraction* f1, struct fraction* f2, struct fraction* ans) {
	// add fractions f1 and f2
	ans->numerator = (f1->numerator * f2->denominator) + (f2->numerator * f1->denominator);
	ans->denominator = f1->denominator * f2->denominator;

	reduce_fract(ans);
}

void subtract_fract(struct fraction* f1, struct fraction* f2, struct fraction* ans) {
	// subtract fractions f1 and f2
	ans->numerator = (f1->numerator * f2->denominator) - (f2->numerator * f1->denominator);
	ans->denominator = f1->denominator * f2->denominator;

	reduce_fract(ans);
}

void multiply_fract(struct fraction* f1, struct fraction* f2, struct fraction* ans) {
	// multiply fractions f1 and f2
	ans->numerator = f1->numerator * f2->numerator;
	ans->denominator = f1->denominator * f2->denominator;

	reduce_fract(ans);
}

void divide_fract(struct fraction* f1, struct fraction* f2, struct fraction* ans) {
	// divide fractions f1 and f2
	ans->numerator = f1->numerator * f2->denominator;
	ans->denominator = f1->denominator * f2->numerator;

	reduce_fract(ans);
}


void main () {

	struct fraction f1;
	struct fraction f2;
	struct fraction ans;

	f1.numerator = 3;
	f1.denominator = 12;

	f2.numerator = 20;
	f2.denominator = 40;

	printf("fraction 1: %i / %i\n", f1.numerator, f1.denominator);
	reduce_fract(&f1);
	printf("simplified fraction 1: %i / %i\n", f1.numerator, f1.denominator);

	printf("fraction 2: %i / %i\n", f2.numerator, f2.denominator);
	reduce_fract(&f2);
	printf("simplified fraction 2: %i / %i\n", f2.numerator, f2.denominator);

	add_fract(&f1, &f2, &ans);
	printf("added fractions: %i / %i\n", ans.numerator, ans.denominator);

	subtract_fract(&f1, &f2, &ans);
	printf("subtracted fractions: %i / %i\n", ans.numerator, ans.denominator);

	multiply_fract(&f1, &f2, &ans);
	printf("multiplied fractions: %i / %i\n", ans.numerator, ans.denominator);

	divide_fract(&f1, &f2, &ans);
	printf("divided fractions: %i / %i\n", ans.numerator, ans.denominator);


	// printf("fraction 2 : %i / %i\n", f2.numerator, f2.denominator);


}
