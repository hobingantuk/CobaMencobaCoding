#include <stdio.h>


int main(){
	int N;
	
	scanf("%d",&N);
	
	if(N <=9){
	printf("satuan\n");
	}
	
	else if(N>9 && N < 100){
	printf("puluhan\n");
	}
	
	else if(N>99 && N < 1000){
	printf("ratusan\n");	
	}

	else if(N>999 && N < 10000){
	printf("ribuan\n");	
	}
	
	else if(N>9999 && N <= 100000){
	printf("puluhribuan\n");	
	}
	else{
	return 0;
	}
	return  0;
}
