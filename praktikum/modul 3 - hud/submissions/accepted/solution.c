#include <stdio.h>
#define INF 999999

int computed[201][201];
int memo[200][200];
int a[201];

int min(int a, int b){
	if(a < b) return a;
	else return b;
}

int solve(int i, int s){
	//s ialah harga yg ingin dibayar
	
	int minim; // solusi minimum (jumlah uang)
	
	if(s == 0) return 0;
	if(i == 0){
		return INF;
	}
	
	// optimisasi memori
	if (computed[i][s]){
		return memo[i][s];
	}
	
	minim = solve(i-1, s);
	if(s >= a[i]){
		minim = min(minim, solve(i-1, s-a[i])+1);
	}
	computed[i][s] = 1;
	memo[i][s] = minim;
	return minim;
}

int main(){
	
	int N, S, i;
//	computed[0][0] = 0; //supaya ada nilainya aja sih, jaga2
	scanf("%d %d", &N, &S);
	for(i=1; i<=N; i++){
		scanf("%d", &a[i]);
	}
	printf("%d", solve(N, S));

	return 0;
}
