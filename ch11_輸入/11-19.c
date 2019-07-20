#include <stdio.h>
#include <string.h>

int main() {
	char source[100];
	char destination[100];
	
	scanf("%s", source);
	scanf("%s", destination);
	
	printf("%s\n", destination);
	strcpy(destination, source);
	printf("%s\n", destination);
	
	return 0;
}


