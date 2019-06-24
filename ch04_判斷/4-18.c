#include <stdio.h>

int main(){
	int i, j, k, max;
	scanf("%d %d %d", &i, &j, &k);
	max = (i > j)? i : j;
	if (k > max)
		max = k;
	printf("%d\n", max);

	return 0;
}
