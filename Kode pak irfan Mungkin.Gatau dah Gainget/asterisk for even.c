#include <stdio.h>

int main(){
	int range;
	int i;
	
	scanf("%d",&range);
	
	for (i = 1 ; i < range  ; i++) {
		if(i %2 == 0){
		printf("%c",'*');
		}	
		else{
		printf("%d",i);
		}
	
	}
	return 0;
}

