#include <stdio.h>


int main(){
	int x, t1 = 0, t2 = 1, t3;
	int a=0,b=1,c;
	int sum;
	int num;

	
	printf("Enter The Number =");
	scanf("%d", &num);
	
	for (x = 1; x <= num; ++x) { 	//mencari fibonnaci urutan ke-num
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        
    }
    
    printf("%dth Fibonacci = %d\n" , num, t1);	//print fibonacci urutan ke-num
	
	while(a <= t1){		//mencari jumlah fibonacci sampai urutan ke -n
		sum += a;
		c=a+b;
		a = b;
		b = c;
	}
	printf("The sum of fibonacci %dth term = %d",num,sum);	//print jumlah fibonacci
	
	return 0;
}



