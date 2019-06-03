#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	scanf("%d%d%d", &a, &b, &c);
	// (-b±√(b^2-4ac)) / 2a
	//Multiple roots: b^2 - 4ac = 0
	printf("%d", b * b == 4 * a * c);
		
	return 0;
}
