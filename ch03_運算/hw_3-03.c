#include <stdio.h>
int main(){
	int i = 0;
	scanf("%d", &i);
	printf("%d\n", i/1000 + i/100%10 + i/10%10 + i%10);

	return 0;
}
