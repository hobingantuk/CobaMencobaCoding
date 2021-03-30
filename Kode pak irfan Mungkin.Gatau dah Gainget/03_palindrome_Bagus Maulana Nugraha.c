#include <stdio.h>
#include <strings.h>

int main(){
	char wordX[100],wordY[100];
	
	
	printf("Enter The  Word  = ");
	gets(wordX);
	
	strcpy(wordY,wordX);
	strrev(wordY);
	
	if(strcmp(wordX,wordY) == 0){
		printf("\nIt is a palindrome");
	}
	else{
		printf("\nIt is not a palindrome");
	}
}
