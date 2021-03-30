//
//  main.c
//  02_fibo_[Denta_Bramasta_Hidayat]
//
//  Created by Denta Bramasta Hidayat on 26/10/20.
//

#include <stdio.h>
long fibonacci(long n);
long sum_fib(long n);
int main ()
{
    long number;
    
    printf("enter the number = ");
    scanf("%ld", &number);
    printf("%ldth Fibonacci = %ld\n", number, fibonacci(number));
    printf("Sum of Fibonacci until %ld term = %ld\n", number, sum_fib(number));
  
  return 0;
}
long fibonacci(long n){
    
    if (n==0||n==1) {
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

long sum_fib(long n){
    
    if (n==0||n==1) {
        return n;
    }
    else{
        return sum_fib(n-1)+sum_fib(n-2)+1;
    }
}
