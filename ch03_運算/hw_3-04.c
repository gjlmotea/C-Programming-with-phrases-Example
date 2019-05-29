#include <stdio.h>
int main(){
	int i = 0;
	scanf("%d", &i);
	printf("%d\n", ((i%3 == 0)&&(i%5 != 0)) || (i%3 != 0)&&(i%5 == 0));

	return 0;
}
