#include <stdio.h>
#include <stdbool.h>


int main(){
	int x;
	scanf("%d", &x);
	
	if(x >= 0 && x < 10){
		printf("Merupakan Bilangan Armstrong\n");
	}
	
	else if(x >= 10 && x < 100){
		int puluhan = x / 10;
		int satuan = x % 10;
		
		if(puluhan*puluhan + satuan*satuan == x){
			printf("Merupakan Bilangan Armstrong\n");
		}
		else{
			printf("Bukan Merupakan Bilangan Armstrong\n");
		}
	}
	
	else if(x >= 100 && x < 1000){
		// 371
		// ratusan = 371 / 100 = int(3.71) = 3
		// satuan = 371 % 10 = 1
		// puluhan = 371 / 10 = int(37.1) = 37 -> 37 % 10 = 7
		
		int ratusan = x / 100;
		int satuan = x % 10;
		int puluhan = (x / 10) % 10;
		
		if(ratusan*ratusan*ratusan + puluhan*puluhan*puluhan + satuan*satuan*satuan == x){
			printf("Merupakan Bilangan Armstrong\n");
		}
		else{
			printf("Bukan Merupakan Bilangan Armstrong\n");
		}
	}
	
	// teka teki 1
//	if(1)
//		printf("dem");
//	else 
//		printf("tak");
	
//	// teka teki 2
//	if(false) printf("dem");
//	else printf("tak");
	
//	// teka teki 3
//	int x = 3;
//		
//	if( x = 2 )
//	{
//		printf("dem");
//	}
//	else {
//		printf("tak\n");
//	}
	
//	
	// teka teki 4
//	int y;
//	y = 2;
//	
//	if( y == 2 + 3) printf("dem");
//	else printf("tak");
	
}
