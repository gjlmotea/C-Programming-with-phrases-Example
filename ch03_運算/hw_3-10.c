#include <stdio.h>

int main() {
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	printf("%d",  2 * ( a*b + b*c + c*a ) + (a - 2*e) *8*d + (b - 2*e) *8*d + (c - 2*e) *8*d);
	return 0;
}


/*
寫一個程式讀入五個整數a、b、c、d、e。
圖形如 圖3.1，
長a、寬b、高c，凹陷進去的深度d、沒凹進去的邊框寬度e，
計算此凹陷進去的長方體表面積。
*/

