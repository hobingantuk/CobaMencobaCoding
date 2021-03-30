#include <stdio.h>


int main(){
	int number;
	
	scanf("%d",&number);
	
	if(number%2 == 0 || number%-2 == 0  ){
		printf("\nEven \n");
	}
	else{
	printf("\nOdd\n");	
	} 
	
	
	return 0;
}
