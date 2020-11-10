#include <stdio.h>

int is_prime(int n){

	int d;

	for (d=2; d*d <= n; d++){
		if (!(n % d))
			return 0;
	}

	return 1;
}

int main(){

	int num, numprimes;

	for (num = 2, numprimes = 0; numprimes != 25; num++){
		if (is_prime(num)) {
			printf("%d\n", num);
			numprimes++;
		}
	}
	return 0;
}



dfdfdjdfdfdfddddf
