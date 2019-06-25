#include <stdio.h>

int main(){
	int i = 0, j;
	scanf("%d", &j);

	while(i < j)
		i += 5;
	
	printf("%d\n", i);

	return 0;
}
