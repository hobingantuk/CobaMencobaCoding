#include <stdio.h>
#include <math.h>

int main (){
	
	int N,i,j,n;
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
	scanf("%d",&n);
	
	int count = 2;
		for(j=2;j<=sqrt(n);j++){
			if(n%j == 0){
			count++;
			}		
		}
			if(count<=3){
			printf("YA\n");
		}
			else{
			printf("BUKAN\n");
		}
	}

	return 0;
}

