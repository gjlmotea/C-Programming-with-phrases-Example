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


/*
寫一個程式自動找零錢。
首先讀入一個介於1~100之間的整數，使用最少數入的1、5、10、50元硬幣湊足給定的整數。
*/
