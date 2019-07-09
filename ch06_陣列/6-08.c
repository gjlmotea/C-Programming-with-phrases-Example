#include <stdio.h>

int main() {
	int m, n[100];
	int i, j, temp;
	scanf("%d", &m);
	for(i = 0; i < m; i++)
		scanf("%d", &n[i]);
	for(i = m-1; i >= 0; i--)
		for(j = 0; j < i; j++)
			if(n[j] > n[j+1]){
				temp = n[j];
				n[j] = n[j+1];
				n[j+1] = temp;
			}
	for(i = 0; i < m; i++)
		printf("%d\n", n[i]);
	
	return 0;
}
