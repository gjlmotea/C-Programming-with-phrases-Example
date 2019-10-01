#include <stdio.h>

int main() {
	int a1, a2, b1, b2, c1, c2;
	scanf("%d %d %d %d %d %d",&a1 ,&a2 ,&b1 ,&b2 ,&c1 ,&c2);
	int a = (a1*a1 + a2*a2);
	int b = (b1*b1 + b2*b2);
	int c = (c1*c1 + c2*c2);
	if(a>=b){
		if(a>=c){
			printf("%d\n%d\n", a1, a2);
		}else{
			printf("%d\n%d\n", c1, c2);
		}
	}else{
		if(b>=c){
			printf("%d\n%d\n", b1, b2);
		}else{
			printf("%d\n%d\n", c1, c2);
		}
	}
	return 0;
}


/*
寫一個程式讀入三個平面上的點座標，然後印出其中距離原點最遠的點。
如果兩個或多個點有相同的距離，輸出最先出現的點座標。
*/
