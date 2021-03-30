#include <stdio.h>

int arr[2][1005];

void swap(int a,int b,int c,int d){
	
	int tempo = arr[a][c];
	arr[a][c]=arr[b][d];
	arr[b][d] = tempo;
}


int main(){
	int N,Q,i,j;
	

	scanf("%d",&N);
	
	for(i=0;i<2;i++){
		for(j=0;j<N;j++){
		
		scanf("%d",&arr[i][j]);
		
		}
	}
	
	scanf("%d",&Q);
	
	for(i=0;i<Q;i++){
	char temp1[5],temp2[5];
	int x,y;
	scanf("%s %d %s %d",temp1,&x,temp2,&y);
	
	int p; 
	p = temp1[0] - 'A';
	int q; 
	q = temp2[0] - 'A';

	
	swap(p,q,x-1,y-1);
	 
	}
	
	for(i=0;i <2;i++){
		for(j=0;j<N;j++){
		printf("%d",arr[i][j]);
			if(j < N-1){
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;


}
