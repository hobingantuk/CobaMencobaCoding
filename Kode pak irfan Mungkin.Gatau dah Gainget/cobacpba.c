#include <stdio.h>

int add(int a,int b,int *c){
	
	*c= a + b;
	
}

int main(void)
{
    int a = 1;
	int b = 2;
	int c;
	add(a, b, &c);
	printf("%d", c);
    return 0;
}
