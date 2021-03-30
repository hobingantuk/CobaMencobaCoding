#include <stdio.h>


#define BE 10

int main(){
	
	char command[BE];
	FILE *afPtr;
	
	if((afPtr = fopen("02_file_input.txt", "r"))== NULL ){
		printf("File could not be opened\n");
	}
	else{
		fscanf(afPtr,"%c",command[BE]);
		printf("%c",command[BE]);
	}
	
	
	
	return 0;
	
}
