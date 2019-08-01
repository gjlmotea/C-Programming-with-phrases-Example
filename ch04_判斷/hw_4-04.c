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
