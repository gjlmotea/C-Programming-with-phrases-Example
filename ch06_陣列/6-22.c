#include <stdio.h>

int main() {
	int a[2][3][4];
	int i, j, k;
	
	printf("%d\n", sizeof(a[0][0][0]));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a));
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			for(k = 0; k < 4; k++)
				printf("%p ", &a[i][j][k]);
			printf("\n");
		}
		printf("\n");
	}
	
	for(i = 0; i < 2; i++)
		printf("%p\n", &a[i][1]);
	printf("\n");
	
	for(i = 0; i < 2; i++)
		printf("%p\n", a[i][1]);
	printf("\n");
	
	for(i = 0; i < 2; i++)
		printf("%p\n", &a[i]);
	printf("\n");
	
	for(i = 0; i < 2; i++)
		printf("%p\n", a[i]);
	printf("\n");
	
	printf("%p\n", &a);
	printf("%p\n", a);
	
	
	return 0;
}
