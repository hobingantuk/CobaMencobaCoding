#include <stdio.h>

int main(){
	int N,i,in;
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
	scanf("%d",&in);
	
	
	int prime =1;
	
	if(in==1){
	prime = 0;
	}
	
	int divisor = 2;
	while(divisor < in){
		if(in%divisor == 0){
		prime = 0;
		}
		divisor++;
	} 
	
	if(prime==1){
	printf("YA\n");
	} else{
	  printf("BUKAN\n");
	}
	
	}
	return 0;
}
