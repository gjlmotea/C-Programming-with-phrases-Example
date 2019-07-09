#include <stdio.h>

int main() {
	int a[10];
	int i;
	
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a));
	for(i = 0; i < 10; i++)
		printf("%p\n", &a[i]);
	printf("%p\n", &a);
	printf("%p\n", a);
	
	return 0;
}
