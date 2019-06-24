#include <stdio.h>

int main(){
	int year, k;
	scanf("%d", &year);
	if (year % 400 == 0)
		k = 1;
	else if ((year % 4 == 0) && (year % 100 != 0))
		k = 1;
	else
		k = 0;
	printf("%d\n", k);

	return 0;
}
