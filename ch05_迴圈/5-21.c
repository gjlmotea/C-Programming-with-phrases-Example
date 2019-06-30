#include <stdio.h>

int main() {
	int i, j = 1, n;
	scanf("%d", &n);
	for(i = 2; (i * i <= n ) && (j == 1); i++)
		if(n % i == 0)
			j = 0;
	printf("%d\n", j);
			
	return 0;
}
