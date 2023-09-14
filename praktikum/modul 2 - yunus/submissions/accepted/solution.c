#include <stdio.h>

int main(){
	int i, j;
	int N, M;
	
	scanf("%d %d", &M, &N);
	
	for(i=0; i<M; i++)
	{
		for(j=0; j<N; j++)
		{
			if(i==0 || j==0 || i==(M-1) || j==(N-1))
				printf("#");
			else 
				printf("-");
		}
		printf("\n");
	}
}
