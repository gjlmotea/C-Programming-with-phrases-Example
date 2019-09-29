#include <stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	//c > a and d > b,    點(a,b) , 點(c,d)
	
	printf("長方形面積:%d\n", (c - a) * (d - b));
	printf("長方形周長:%d\n", 2 * (c-a) + 2 * (d*b));
	
	return 0;
}


/*
寫一個程式讀入四個整數 a、b、c、d，並且保證 c>a 且 d>b。
計算以 點(a,b)為左下角、點(c,d)為右上角的長方形面積及周長。
*/
