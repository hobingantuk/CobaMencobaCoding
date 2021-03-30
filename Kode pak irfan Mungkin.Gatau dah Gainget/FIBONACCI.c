#include <stdio.h>


int main(){
	int a=0,b=1,c;
	int sum;
	int num;
	int i, t1 = 0, t2 = 1, t3;
	
	printf("Enter The Number =");
	scanf("%d", &num);
	
	for (i = 1; i <= num; ++i) {	//find fibonacci num-term
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    printf("%dth Fibonacci = %d\n" , num, t1);	//print fibonacci numth
	
	
	while(a<=t1){		//find fibonacci sum
		sum += a;
		c=a+b;
		a = b;
		b=c;
	}
	printf("The sum of fibonacci %dth term = %d\n",num,sum);	//print  fibonacci sum
	
	return 0;
}

