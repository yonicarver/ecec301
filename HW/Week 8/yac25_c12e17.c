
int sum_two_dimensional_array(const int **a, int n) {

	int i, sum = 0;
	int length = LEN;
	int *x = a;

	for (i = 0; i < length; i++) {
		sum += *(x + i);
	}

	return sum;
}
