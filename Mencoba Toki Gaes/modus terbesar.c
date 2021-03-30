#include <stdio.h>

int main(){
	int N,x;
	int temp=0,modus;
	
	
	scanf("%d",&N);
	
	int i,arr[10001];

	for(i=0;i < N ;i++){
	scanf("%d",&x);
	arr[x]++;

	if(arr[x]>temp){
		temp = arr[x];
		modus = x;
	}
	else if(arr[x] == temp){
			if(x > modus){
			modus = x;
			}
	}


	
	} 
	
	printf("%d\n",modus);
	
	return 0;
	
	
}
