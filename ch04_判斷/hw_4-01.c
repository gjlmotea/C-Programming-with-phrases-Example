#include <stdio.h>
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int min = a;
	if (min > b) min = b;
	if (min > c) min = c;

	printf("%d\n", min);

	return 0;
}


/*
寫一個程式讀入三個正整數a、b、c，計算並印出其中的最小值。
*/

