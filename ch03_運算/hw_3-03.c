#include <stdio.h>
int main(){
	int i = 0;
	scanf("%d", &i);
	printf("%d\n", i/1000 + i/100%10 + i/10%10 + i%10);

	return 0;
}


/*
寫一個程式讀入四位正整數並計算四個位數的和。
ex:輸入1234，則輸出10。
*/
