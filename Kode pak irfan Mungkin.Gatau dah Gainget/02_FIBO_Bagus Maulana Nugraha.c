#include <stdio.h> 

long fibonaccirecursive(long x);
long sumrecursive(long x);

int main(){
	long sumrec;
	long result;
	long num;
	long i,t1 = 0, t2 = 1, t3;
	long a=0,b=1,c=0;
	long sum = 0;
	
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
	
	printf("\n\nIterative result\n");
	printf("%ldth Fibonacci = %ld\n" , num, t1);
	printf("Sum of fibonacci %ldth term = %ld\n",num, sum );	
	
	
	printf("\n\nRecursive result\n");
	result = fibonaccirecursive(num);
	printf("%ldth Fibonacci = %ld\n", num , result);
	sumrec = sumrecursive(num);
	printf("Sum of Fibonacci %ldth term = %ld\n",num,sumrec);
	
	return 0;
}



long fibonaccirecursive(long x){		//function to find fibonacci num-term
	
	if( x==0 || x==1){
		return x;
	}
	else{
		return fibonaccirecursive(x-1)+fibonaccirecursive(x-2);
	}
}



long sumrecursive(long x){				// function to find sum of fibonacci until num term
	
	if( x==0 || x==1){
		return x;
	}
	else {
	return sumrecursive(x-1) + sumrecursive(x - 2) + 1;		
	}
	
	}
	 
