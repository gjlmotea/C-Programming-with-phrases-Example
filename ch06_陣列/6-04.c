#include <stdio.h>

int main(){
	int A[5], B[5], C = 0;
	int i, j;
	for(i = 0; i < 5; i++)
		scanf("%d", &A[i]);
	for(i = 0; i < 5; i++)
		scanf("%d", &B[i]);
	for(i = 0; i < 5; i++)
		C += A[i] * B[i];
	printf("%d\n", C);

	return 0;
}
