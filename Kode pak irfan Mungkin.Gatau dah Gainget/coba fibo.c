#include <stdio.h> 

long fibonaccirecursive(int x);
long sumrecursive(int x);

int main(){
	int sumrec;
	int result;
	int num;
	int i,t1 = 0, t2 = 1, t3;
	int a=0,b=1,c=0;
	int sum = 0;
	
	printf("Enter The Number =");
	scanf("%ld", &num);
	
	for (i = 1; i <= num; ++i) {	
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    
    while(a<=t1){		
		sum += a;
		c=a+b;
		a = b;
		b = c;
	}
	
	printf("\n\niterative result\n");
	printf("%ldth Fibonacci = %ld\n" , num, t1);
	printf("Sum of fibonacci %ldth term = %ld\n",num, sum );	
	
	
	printf("\n\nrecursive result\n");
	result = fibonaccirecursive(num);
	printf("%ldth Fibonacci = %ld\n", num , result);
	sumrec = sumrecursive(num);
	printf("Sum of Fibonacci %ldth term = %ld\n",num,sumrec);
	
	return 0;
}



long fibonaccirecursive(int x){		//function to find fibonacci num-term
	
	if( x==0 || x==1){
		return x;
	}
	else{
		return fibonaccirecursive(x-1)+fibonaccirecursive(x-2);
	}
}



long sumrecursive(int x){				// function to find sum of fibonacci until num term
	
	if( x==0 || x==1){
		return x;
	}
	else {
	return sumrecursive(x-1) + sumrecursive(x - 2) + 1;		
	}
	
	}
	 
