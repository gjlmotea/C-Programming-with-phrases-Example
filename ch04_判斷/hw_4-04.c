#include <stdio.h>

int main() {
	int a, b, c, d;
	//point (a, b), (c, d)
	int w = 0, h = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if(d > b){
		w = d - b;
	}else{
		w = b - d;
	}
	
	if(c > a){
		h = c - a;
	}else{
		c = a - c;
	}
	printf("%d", 2 * (h + w));
	
	return 0;
}


/*
寫一個程式讀入四個整數a、b、c、d，本題保證 點(a,b)及 點(c,d)不會為水平或垂直共線。
計算此 點(a,b)及 點(c,d)為兩對角頂點的長方形的周長。
*/
