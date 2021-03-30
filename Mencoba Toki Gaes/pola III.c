#include <stdio.h>

int main(){
	int N=0,x,i,j;
	
	scanf("%d",&x);
	
	for(i=1;i<= x;i++){
		for(j=0;j<i;j++){
		printf("%d",N);
		N++;
			if(N>9){
			N=0;
			}
		}
		printf("\n");
	}
	return 0;
}
