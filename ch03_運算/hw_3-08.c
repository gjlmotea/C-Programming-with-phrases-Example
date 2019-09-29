#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	scanf("%d%d%d", &a, &b, &c);
	// (-b±√(b^2-4ac)) / 2a
	//Multiple roots: b^2 - 4ac = 0
	printf("%d", b * b == 4 * a * c);
		
	return 0;
}


/*
寫一個程式讀入三個整數 a、b、c，其中a≠0。
如果方程式 f(x) = ax² + bx + c = 0 有重根則輸出1，其餘狀況均輸出0。
*/
