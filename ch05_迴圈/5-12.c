#include <stdio.h>

int main() {
	int i, n;
	int sum = 0;
	int square_sum = 0;
	int cubic_sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		sum += i;
		square_sum += i * i;
		cubic_sum += i * i * i;
	}
	printf("%d\n", sum);
	printf("%d\n", square_sum);
	printf("%d\n", cubic_sum);
	
	return 0;
}
