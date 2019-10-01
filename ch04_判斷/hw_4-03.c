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
	printf("%d", h * w);
	
	return 0;
}


/*
寫一個程式讀入四個整數a、b、c、d。計算以 點(a,b)及點(c,d)為兩對角頂點的長方形面積。
點(a,b)或點(c,d)若是水平或垂直共線則面積為0。
*/
