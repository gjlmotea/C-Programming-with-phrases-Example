#include <stdio.h>
#include <string.h>

int main() {
	int i, length;
	char string[80], temp;
	scanf("%s", string);
	printf("%s\n", string);
	length = strlen(string);
	printf("%d\n", length);
	
	for(i = 0; i < length / 2; i++){
		temp = string[i];
		string[i] = string[length -i -1];
		string[length -i -1] = temp;
	}
	
	printf("%s\n", string);
	
	return 0;
}
