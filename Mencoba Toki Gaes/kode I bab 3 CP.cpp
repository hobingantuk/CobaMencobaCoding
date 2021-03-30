#include <stdio.h>

int main(){
	int N,K,a,b,tempo;
	
	
	scanf("%d %d",&N,&K);
	
	int arr[N];
	
	for(a = 0; a < N ; a++ ){
	scanf("%d",&arr[a]);
	}
	
		for(a=0;a < N-1;a++){
	
			for( b = 0; b < N-a-1;b++){
	 
	 			if (arr[b>arr[b+1]]){
				tempo = arr[b];
				arr[b] = arr[b+1];	
				arr[b+1] = tempo; 		
	 			}	
	
			}
	
	
	}
	
	printf("%d",arr[K-1]);	
}
