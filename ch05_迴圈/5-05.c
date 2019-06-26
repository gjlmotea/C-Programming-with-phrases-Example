#include <stdio.h>

int main(){
	int i, j, k;
	// 輸入的 i 不小於j
	scanf("%d %d", &i, &j);
	while( i % j != 0){
		k = i % j;
		i = j;
		j = k;
	}
	printf("%d\n", j);

	return 0;
}
