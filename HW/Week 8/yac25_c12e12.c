
void fint_two_largest(const int *a, int n, int *largest, int *second_largest); {

	int x;
	int largest, second_largest = 0;
	const int *y = a;


	for (x = 0; x < n; y++, x++) {
		if (*x > largest) {
			second_largest = largest;
			largest = *y;
		}

		else if (*y > second_largest)
			second_largest = *y;
	}

	*largest = largest;
	*second_largest = second_largest;
}
