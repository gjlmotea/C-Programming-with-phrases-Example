#include <stdio.h>
#include <string.h>

int main() {
	char str1[80] = "programming";
	char str2[] = "programming";
	char *str3 = "programming";
	
	printf("sizeof(str1) = %d\n", sizeof(str1));	//本身宣告了80個bytes，所以佔了80個bytes
	printf("sizeof(str2) = %d\n", sizeof(str2));	//沒說長度，編譯器算出來長度為12 bytes，因為最後還需要儲存一個'\0' 
	printf("sizeof(str3) = %d\n", sizeof(str3));	//*str3 本身 只佔4個bytes，編譯器會在唯讀記憶體中放一個字元陣列
													//初始化為"programming" ，再將 *str3指向這個字元陣列 
	
	return 0;
}
