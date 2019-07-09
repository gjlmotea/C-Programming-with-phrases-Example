#include <stdio.h>
#include <string.h>

int main() {
	char str1[80] = "programming";
	char str2[] = "programming";
	char *str3 = "programming";
	
	printf("sizeof(str1) = %d\n", sizeof(str1));
	printf("sizeof(str2) = %d\n", sizeof(str2));
	printf("sizeof(str3) = %d\n", sizeof(str3));
	
	return 0;
}
