#include <stdio.h>

int main() {
	int i, j = 0, n;
	scanf("%d", &n);
	for(i = 2; i * i <= n; i++)
		if(n % i == 0){
			j = 1;
			break;
		}
	printf("%d\n", j);
			
	return 0;
}
