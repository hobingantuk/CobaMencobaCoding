#include <stdio.h>

int main(){
	int N;
	
	scanf("%d",&N);
	
	int b,hasil=0;
	int i;
	
		for(i=0;i<N;i++){
		scanf("%d",&b);
		hasil += b;
		}
	printf("%d",hasil);
}

