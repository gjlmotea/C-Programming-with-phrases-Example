#include <stdio.h>

int main() {
	int composite[101];
	int i, n, j = 2;
	scanf("%d", &n);
	for(i = 2; i <= n; i++)
		composite[i] = 0;
	while(j * j <= n){
		while(composite[j] == 1)
			j++;
		for(i = 2 * j; i <= n; i += j)
			composite[i] = 1;
		j++;
	}
	for(i = 2; i <= n; i++)
		if(composite[i] == 0)
			printf("%d\n", i);
	
	return 0;
}
