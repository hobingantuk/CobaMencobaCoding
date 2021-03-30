#include <stdio.h>

int main (){
	
	int N,i,j,h;
	
	scanf("%d",&N);
	
	for(i=1;i<=N;i++){
		for(j=N-i;j>0;j--){
			printf(" ");
		}
		
		for(h=0;h<i;h++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
