#include <stdio.h>

int main(){
	int i, k;
	scanf("%d", &i);
	k = (i > 0)? i : -i;
	printf("%d\n", k);

	return 0;
}
