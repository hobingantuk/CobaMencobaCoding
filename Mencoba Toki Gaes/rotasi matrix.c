#include <stdio.h>

int main(){
	int M,N,i,j;

	scanf("%d %d",&N,&M);
	int trix[M][N];
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
		scanf("%d",&trix[i][j]);

		}
	}
	for (i=0;i<M;i++){
		for(j=N-1;j>=0;j--){
		printf("%d ",trix[j][i]);
		}
		printf("\n");	
	}
	
	
}
