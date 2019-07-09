#include <stdio.h>

int main() {
	int A[2][3], B[3][4], C[2][4]={0};
	int i, j, k;
	
	for(i = 0; i < 2; i++)
		for(j = 0; j < 3; j++)
			scanf("%d", &A[i][j]);
	for(i = 0; i < 3; i++)
		for(j = 0; j < 4; j++)
			scanf("%d", &B[i][j]);
	
	for(i = 0; i < 2; i++)
		for(j = 0; j < 4; j++)
			for(k = 0; k < 3; k++)
				C[i][j] += A[i][k] * B[k][j];
				
	for(i = 0; i < 2; i++){
		for(j = 0; j < 4; j++)
			printf("%4d", C[i][j]);
		printf("\n");		
	}

	
	return 0;
}
