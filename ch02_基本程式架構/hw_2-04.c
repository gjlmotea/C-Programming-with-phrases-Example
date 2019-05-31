#include <stdio.h>
int main() {
	int i = 0;
	int d50 = 0, d10 = 0, d5 = 0, d1 = 0;
	
	scanf("%d", &i);
	d50 = i / 50;
	d10 = i % 50 / 10;
	d5 = i % 10 / 5;
	d1 = i % 5;
	printf("%d\n%d\n%d\n%d\n", d50, d10, d5, d1);
	
	return 0;
}
