#include <stdio.h>

int main() {
	int w = 0, h = 0, d = 0;
	scanf("%d%d%d", &w, &h, &d);
	printf("%d\n", 2 * w * h + 2 * h * d + 2 * w * d);
	printf("%d\n", w * h * d);
	
	return 0;
}
