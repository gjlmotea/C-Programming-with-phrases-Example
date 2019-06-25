#include <stdio.h>

int main(){
	int i, j, power;
	scanf("%d %d", &power, &i);
	switch(power){
	case 1:
		j = i;
		break;
	case 2:
		j = i * i;
	case 3:
		j = i * i * i;
		break;
	default:
		j = 0;
	}
	printf("%d\n", j);

	return 0;
}
