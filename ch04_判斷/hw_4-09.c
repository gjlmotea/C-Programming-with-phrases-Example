#include <stdio.h>

int main() {
	int chic = 0, rabb = 0, carb = 0;
	int sum = 0, legs = 0, tails = 0;
	scanf("%d %d %d", &sum, &legs, &tails);
	
	
/*	
	chic + rabb + carb = sum
	2*chic + 4*rabb + 8*carb = legs
	chic + rabb = tails
	
	=> carb = sum - tails
	
	2*chic + 4*rabb = legs - 8*carb
	2*chic + 2*rabb = 2*tails
	=> 2*rabb = legs - 8*carb - 2*tails
	
	=> chic = tails - rabb
*/

	carb = sum - tails;
	
	if((legs - 8*carb - 2*tails)%2 == 0){
		rabb = (legs - 8*carb - 2*tails) / 2;
		chic = tails - rabb;
		
		if(chic >= 0 && rabb >= 0 && carb >= 0){
			printf("%d %d %d", chic, rabb, carb);
		}else{
			printf("0");	
		}
	}else{
		printf("0");
	}
	
	

	return 0;
}


/*
有雞、兔、螃蟹在同一個籃子裡。
輸入動物的總數、腳的總數、及尾巴的總數，
請計算兔子、 雞、螃蟹的總數，若無解請輸出0。 

雞:2腿 1尾(?) 
兔:4腿 1尾
蟹:8腿

*/
