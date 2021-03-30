#include <stdio.h>

void biner(int a){
if (a==0){
	return;
} 

biner(a/2);
printf("%d",a % 2);


}

int main(){
	
	int n ;
	
	scanf("%d",&n);
	biner(n);
	return 0;
}
