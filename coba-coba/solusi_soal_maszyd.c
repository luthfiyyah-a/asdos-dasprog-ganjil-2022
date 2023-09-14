#include <stdio.h>

int main(){
	
	int N;
	int Q;
	int i, t, j;
	
	scanf("%d", &N);
	
	int a[N];
	int hasil_a[N];
	
	for(i=0; i<N; i++){
		scanf("%d", &a[i]);
		hasil_a[i] = a[i];
	}
	
	int perintah;
	char bitwise[4];
	scanf("%d", &Q);
	for(i=0; i<Q; i++){
		scanf("%d", &perintah);
		if(perintah == 1){
			scanf("%s %d", &bitwise, &t);
			if(strcmp(bitwise, "XOR")==0){
				printf("ini XOR\n");
				for(j=0; j<(sizeof(a)/sizeof(a[0])); j++){
//					hasil_a[j] = a[j] ^ t;
					a[j] = a[j] ^ t;
				}	
			}
			else if(strcmp(bitwise, "OR")==0){
				for(j=0; j<(sizeof(a)/sizeof(a[0])); j++){
//					hasil_a[j] = a[j] || t;
					a[j] = a[j] || t;
				}	
			}
			else if(strcmp(bitwise, "AND")==0){
				for(j=0; j<(sizeof(a)/sizeof(a[0])); j++){
//					hasil_a[j] = a[j] && t;
					a[j] = a[j] && t;
				}	
			}
		}
		else if(perintah == 2){
			for(j=0; j<(sizeof(a)/sizeof(a[0])); j++){
//				printf("tes strlen: %d || ", sizeof(a)/sizeof(a[0]));
//				printf("%d ", hasil_a[j]);
				printf("%d ", a[j]);
			}
			printf("\n");
		}
	}
}
