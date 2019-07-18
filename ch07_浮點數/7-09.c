#include <stdio.h>

int main() {
	float x;
	float e = 1.0;
	int i;
	int n = 10;
	int factorial = 1;
	float xpower = 1.0;
	
	scanf("%f", &x);
	for(i = 1; i <= n; i++){
		factorial *= i;
		xpower *= x;
		e += xpower / factorial;
	}
	printf("%f\n", e);
	return 0;
}
