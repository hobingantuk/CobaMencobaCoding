#include <stdio.h>

int main(){
	int N,x;
	int temp=0,modus;
	
	
	scanf("%d",&N);
	
	int i,arr[10001];

	for(i=0;i < N ;i++){
	scanf("%d",&x);
	arr[x]++;
	
	}
	for(i=0;i<N;i++){
	
		if(arr[i]>temp){
			temp = arr[i];
			modus = i;
		}
		
	}
	printf("%d\n",modus);
	
	 
	

	return 0;
	
	
}
