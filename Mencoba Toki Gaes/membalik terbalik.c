#include <stdio.h>

int reverse(int x){
	int temp=x;
	int back = 0;
	
	while(temp>0){
	
	back = (back * 10) + (temp % 10);
	temp = temp /10;
	
	}
	return back;
}

int main(){
	int A,B,sum;
	
	scanf("%d %d",&A,&B);
	
	A = reverse(A);
	B = reverse(B);
	sum= reverse(A+B);
	
	printf("%d",sum);
	
	return 0;
}
