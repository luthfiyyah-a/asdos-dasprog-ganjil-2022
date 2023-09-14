#include <stdio.h>

int main(){
	char huruf;
	scanf("%c", &huruf);
	
	// mengubah ke ascii
	if(huruf >= 97 && huruf <= 122){
		huruf = huruf - 32;	
	}
	
	printf("%c", huruf);
}
