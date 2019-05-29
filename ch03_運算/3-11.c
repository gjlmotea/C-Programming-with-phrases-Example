#include <stdio.h>
int main(){
	int i, j, k;
	scanf("%d", &i);
	scanf("%d", &j);
	k = i % j;
	printf("%d\n", k);
	scanf("%d", &i);
	scanf("%d", &j);
	k = i % j;
	printf("%d\n", k);

	return 0;
}
