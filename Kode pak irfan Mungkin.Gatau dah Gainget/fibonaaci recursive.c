#include <stdio.h>

int fibonacci(int x);
int sum(int x);

int main(){
	int num;
	
	printf("Enter The Number =");
	
	scanf("%d", &num);
	
	printf("%dth Fibonacci = %d\n" , num, fibonacci(num));		//print fibonacci num-term
	
	printf("The sum of fibonacci %ldth term = %ld\n",num,sum(num));	//print sum fibonacci until num term
	
	return 0;
}

int fibonacci(int x){		//function to find fibonacci num-term
	
	if( x==0 || x==1){
		return x;
	}
	else{
		return fibonacci(x-1)+fibonacci(x-2);
	}
}



int sum(int x){				// fungsi mencari jumlah fibonacci sampai urutan ke -n
	
	if( x==0 || x==1){
		return x;
	}
	else {
	return sum(x-1) + sum(x - 2) + 1;		
	}
	
	}
