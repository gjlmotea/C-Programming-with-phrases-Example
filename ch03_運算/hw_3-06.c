#include <stdio.h>

int main() {
	int a=0, b=0, c=0, d=0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	//算出點(a,b)與(0,0)的斜率、 算出點(c,d)與(0,0)的斜率，若兩者斜率相同則表示會通過原點
	float m1 = b / a;
	float m2 = d / c; 
	printf("%d", m1 == m2);
	
	return 0;
}


/*
寫一個程式讀入四個正整數 a、b、c、d，並保證 點(a,b)及 點(c,d)為不同點。
如果連接 點(a,b)及 點(c,d)的直線通過原點則輸出1，其餘狀況均輸出0。
*/
