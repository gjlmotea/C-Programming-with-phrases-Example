#include <stdio.h>
int main(){
    int sum = 0;
	int count, i, n;
	scanf("%d", &n);
	for(count = 0; count < n; count++){
		scanf("%d", &i);
		if(i > 0){
			sum += i;
		}
	}
	printf("%d\n", sum);
}
