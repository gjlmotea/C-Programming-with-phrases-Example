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
