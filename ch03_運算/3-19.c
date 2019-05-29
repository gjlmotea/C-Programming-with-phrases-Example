#include <stdio.h>
int main(){
	int i, j, k;
	scanf("%d", &i);
	scanf("%d", &j);
	k = i + 4 * j;
	printf("%d\n", k);
	k = (i + 4) * j;
	printf("%d\n", k);

	return 0;
}
