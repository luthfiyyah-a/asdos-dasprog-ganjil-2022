#include <stdio.h>

int main(){
	
	unsigned long long a; // nilai maks dari x dan y
	unsigned long long b; // nilai min dari x dan y
	unsigned long long max_a, t, i, j, x, y, sum_a, sum_b, result;
	
	scanf("%llu", &t);
	for(j=0; j<t; j++){
		unsigned long long n;
		scanf("%llu", &n);
		sum_b = 0;
		max_a = 0;
		for(i=0; i<n; i++){
			scanf("%llu %llu", &x, &y);
			if(x < y) {
				a = y;
				b = x;
			}
			else {
				a = x;
				b = y;
			}
			
			if(max_a < a) max_a = a;
			sum_b += b;
		}
		result = max_a * 2 + sum_b * 2;
		printf("%llu\n", result);
	}
	return 0;
}
