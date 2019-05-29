#include <stdio.h>
int main(){
	int i;
	int j;
	int k;
	scanf("%d", &i);
	scanf("%d", &j);
	k = (i && j);
	printf("%d\n", k);
	k = (i || j);
	printf("%d\n", k);
	k = !i;	
	printf("%d\n", k);

	return 0;
}
