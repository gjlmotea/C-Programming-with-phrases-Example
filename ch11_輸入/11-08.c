#include <stdio.h>

int main() {
	int i;
	char string[10];
	
	while(scanf("%s", string) !=EOF){
		printf("%s\n", string);
		for(i = 0; i < 10 && string[i] != '\0'; i++)
			printf("%c", string[i]);
		printf("\n");
	}
	
	return 0;
}
