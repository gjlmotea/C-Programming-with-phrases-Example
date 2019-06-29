#include <stdio.h>

int main() {
	int i;
	int j = 1;
	int n;
	scanf("%d", &n);
	for(i = 2; i * i < n; i++)  //在√n內做判斷
		if(n % i == 0)
			j = 0;
	printf("%d\n", j);
	
	return 0;
}
