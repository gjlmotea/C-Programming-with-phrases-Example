#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int max = 0;
	int min1 = 0, min2 = 0;
	
	if(a >= b && a >= c){		//a邊最長 
		max = a;
		min1 = b;
		min2 = c;
	}else if(b > a && b > c){	//b邊最長 
		max = b;
		min1 = c;
		min2 = a;
	}else if(c > a && c > b){	//c邊最長 
		max = c;
		min1 = b;
		min2 = a;
	}
	
	// max^2 > min1^2 + min2^2: 鈍角
	// max^2 = min1^2 + min2^2: 直角
	// max^2 < min1^2 + min2^2: 銳角
	
	int max_sqrt = max * max;
	int min_sqrt = min1 * min1 + min2 * min2;
	if(max_sqrt > min_sqrt){
		printf("2");
	}else if(max_sqrt == min_sqrt){
		printf("3");
	}else{
		printf("1");
	}
	
	
	
	return 0;
}


/*
讀入三個正整數a、b、c 為三角形的三個邊長，
若此三角形為銳角三角形則輸出1、鈍角三角形則輸出2、直角三角形則輸出3。
本題保證a、b、c可形成一個三角形。
*/
