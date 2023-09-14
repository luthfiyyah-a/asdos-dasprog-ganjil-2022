#include <stdio.h>
int main () {
  
	int n;
	scanf("%d", &n);
	
	//deklarasi array. size=n
	int b[n];
	
	int i;
	for(i=0; i<n; i++){
		scanf("%d", &b[i]);
	}
	for(i=0; i<n; i++){
		printf("%d ", b[i]);
	}
}
