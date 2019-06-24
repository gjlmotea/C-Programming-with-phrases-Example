#include <stdio.h>

int main(){
	int year, k;
	scanf("%d", &year);
	k = (year % 400 == 0)? 1 : ((year % 4 == 0) && year % 100 != 0)? 1 : 0;
	printf("%d\n", k);

	scanf("%d", &year);
	k = ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))? 1 : 0;
	printf("%d\n", k);


	return 0;
}
