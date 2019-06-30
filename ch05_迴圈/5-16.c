#include <stdio.h>

int main() {
	int i = 1;
	int sum = 0;
	int square_sum = 0;
	int cubic_sum = 0;
	int n;
	scanf("%d", &n);
	do{
		sum += i;
		square_sum += i * i;
		cubic_sum += i * i * i;
		i++;
	}while(i <= n);
	
	printf("%d\n", sum);
	printf("%d\n", square_sum);
	printf("%d\n", cubic_sum);
	return 0;
}
