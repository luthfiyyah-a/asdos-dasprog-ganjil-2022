#include <stdio.h>
#include <math.h>

int main(){
	unsigned long long n, result;
	scanf("%llu", &n);
	
	long long s = round(sqrt(n));
	
	if(s*s != n)
	{
		printf("tutup/\\");
	}
	else {
		printf("buka\\/\n");
		result = (n*(n+1)/2) * (n*(n+1)/2);
		printf("%llu", result);
	}
}
