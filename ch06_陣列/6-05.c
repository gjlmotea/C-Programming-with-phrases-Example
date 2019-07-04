#include <stdio.h>

int main() {
	int i;
	int fab[100];
	int n;
	scanf("%d", &n);
	fab[0] = 0;
	fab[1] = 1;
	for(i = 2; i < n; i++)
		fab[i] = fab[i-1] + fab[i-2];
	for(i = 0; i < n; i++)
		printf("%d\n", fab[i]);
	return 0;
}
