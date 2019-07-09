#include <stdio.h>

int my_strlen(char *string){
	int i = 0;
	while(i < 100 && string[i] != '\0')
		i++;
	return i;
}

int main() {
	int length;
	char string[100];
	scanf("%s", string);
	printf("%s\n", string);
	length = my_strlen(string);
	printf("%d\n", length);
		
	return 0;
}
