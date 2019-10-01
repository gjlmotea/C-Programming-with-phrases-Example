#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if((a+ b >=c) && (b+ c >=a) && (a+ c >=b)){
		printf("1");
	}else{
		printf("0");
	}
	return 0;
}


/*
讀入三個正整數a、b、c，
如果邊長a、b、c 的三角形不存在則輸出0，否則輸出1。
*/
