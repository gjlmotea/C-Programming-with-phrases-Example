#include <stdio.h>
int main(){
	int i, j, k=3, l=4;
	scanf("%d", &i);
	scanf("%d", &j);
	k = i;
	l = j;
	if (k > 0 || l > 0){
		printf("%d\n", k);
		printf("%d\n", l);
	}
	return 0;
}
