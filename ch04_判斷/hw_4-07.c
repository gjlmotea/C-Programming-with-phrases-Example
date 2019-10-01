#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	int start, end;
	if(a > b){
		start = b;
		end = a;
	}else{
		start = a;
		end = b;
	}
	
	int sum = 0;
	for(int i = start; i <= end; i++){
		sum = sum + i;
	}
	printf("%d", sum);
	
	return 0;
}


/*
讀入兩個整數a、b，並計算由a加到b的和。
*/
