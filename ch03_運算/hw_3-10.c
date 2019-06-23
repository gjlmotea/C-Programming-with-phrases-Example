#include <stdio.h>

int main() {
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	printf("%d",  2 * ( a*b + b*c + c*a ) + (a - 2*e) *8*d + (b - 2*e) *8*d + (c - 2*e) *8*d);
	return 0;
}
