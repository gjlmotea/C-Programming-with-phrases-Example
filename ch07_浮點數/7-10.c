#include <stdio.h>

int main() {
	double x;
	double e = 1.0;
	int i;
	int n = 10;
	int factorial = 1;
	double xpower = 1.0;
	
	scanf("%lf", &x);
	for(i = 1; i <= n; i++){
		factorial *= i;
		xpower *= x;
		e += xpower / factorial;
	}
	printf("%f\n", e);
	
	return 0;
}
