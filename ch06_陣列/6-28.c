#include <stdio.h>

int main() {
	int i, j;
	int l, m;
	int array1[3][3] = {{1, 2}, {4}};
	int array2[3][3] = {{0}};
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++)
			printf("%3d", array1[i][j]);
		printf("\n");
	}
	printf("\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++)
			printf("%3d", array2[i][j]);
		printf("\n");
	}	
	
	return 0;
}
