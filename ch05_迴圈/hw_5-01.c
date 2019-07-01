#include <stdio.h>
int main(){
	int n, i;
	int result = 1;
	scanf("%d %d", &n, &i);
	if(i > 0){
		for(i; i > 0;i--)
			result = result * n;
	}
	printf("%d\n", result);
	return 0;
}
