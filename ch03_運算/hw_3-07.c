#include <stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	//c > a and d > b,    點(a,b) , 點(c,d)
	
	printf("長方形面積:%d\n", (c - a) * (d - b));
	printf("長方形周長:%d\n", 2 * (c-a) + 2 * (d*b));
	
	return 0;
}
