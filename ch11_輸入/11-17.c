#include <stdio.h>
#include <string.h>

int main() {
	char str1[80] = "programming";
	char str2[] = "programming";
	char *str3 = "programming";
	
	printf("strlen(str1) = %d\n", strlen(str1));
	printf("strlen(str2) = %d\n", strlen(str2));
	printf("strlen(str3) = %d\n", strlen(str3));
	
	return 0;
}
