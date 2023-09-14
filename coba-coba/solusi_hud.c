#include <stdio.h>

int N, i;
int a[21];
int best;

int min(int a, int b){
	if(a < b) return a;
	else return b;
}
int f(s){
	if(s == 0) return 0;
	
	best = 999;
	for(i=1; i<=N; i++){
		if(a[i] <= s){
			best = min(best, f(s-a[i])+1);
		}
	}
	return best;
}

int main(){
	int s;
	scanf("%d %d", &N, &s);
	for(i=1; i<=N; i++){
		scanf("%d", &a[i]);
	}
	printf("%d\n\n", min(2, 3));
	printf("%d", f(s));
}
