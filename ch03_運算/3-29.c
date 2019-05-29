#include <stdio.h>
int main(){
	int i, j, k=3, l=4;
	scanf("%d", &i);
	scanf("%d", &j);
	if ((k = i) > 0 || (l = j) > 0){
		printf("%d\n", k);
		printf("%d\n", l);
	}
	return 0;
}
