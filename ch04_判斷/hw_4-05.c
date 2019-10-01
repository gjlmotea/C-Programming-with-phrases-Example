#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	// b^2 - 4ac
	
	int judge = b*b - 4*a*c;
	if(judge > 0){
		printf("1");
	}else if(judge < 0){
		printf("-1");
	}else{
		printf("0");
	}
	
	return 0;
}


/*
讀入三個非0整數a、b、c，
如果f(x) = ax^2 + bx + c= 0
有重根則輸出0、兩相異實根輸出1、兩相異虛根輸出-1
*/
