#include <stdio.h>

int main(){
	int a[10];
	int i;
	for(i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for(i = 0; i < 10; i++)
		printf("%d\n", a[i]);

	return 0;
}
