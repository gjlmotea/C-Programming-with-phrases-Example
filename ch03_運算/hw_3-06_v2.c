#include <stdio.h>
#include <math.h>

int main() {
	int a=0, b=0, c=0, d=0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", (abs(c*b-a*d)+1) * ((int)pow(10,abs(c*b-a*c)))%10);
	//完美版
	
	return 0;
}
