#include <stdio.h>

int main(){
	int i = 1;
	int sum = 0;
	int k;
	scanf("%d", &k);
	while(i <= k){
		sum += i;
		i++;
	}
	printf("%d\n", sum);

	return 0;
}
