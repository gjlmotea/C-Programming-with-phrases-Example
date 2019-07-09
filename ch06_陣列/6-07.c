#include <stdio.h>

int main() {
	int composite[101];
	int i, n, j = 2;
	scanf("%d", &n);
	for(i = 2; i <= n; i++)
		composite[i] = 0;
	while(j * j <= n){
		if(composite[j] == 1)
			j++;
		for(i = 2 * j; i <= n; i += j)
			composite[i] = 1;
			//j的倍數皆為合成數，composite[2*j] composite[3*j] composite[4*j] ...等都設為1，
			//代表2*j、3*j、4*j...都是合成數 
		j++;
	}
	for(i = 2; i <= n; i++)
		if(composite[i] == 0)
			printf("%d\n", i);
	
	return 0;
}
