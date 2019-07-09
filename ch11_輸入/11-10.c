#include <stdio.h>
#include <string.h>

int main() {
	char string[80];
	char *ptr = string;
	
	int i;
	scanf("%s", ptr);
	printf("%s\n", ptr);
	for(i = 0; i < strlen(ptr); i++)
		printf("%c ", ptr[i]);
	
	return 0;
}
