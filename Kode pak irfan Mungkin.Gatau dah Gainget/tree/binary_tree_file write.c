#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BE 10

int main(){
	
	char command[BE];
	
	FILE *afPtr;
	
	if((afPtr = fopen("02_file_input.txt", "r"))== NULL ){
		printf("File could not be opened\n");
	}
	
	else{
		printf("Enter Number/Commands. \n");
		printf("Enter EOF to end input. \n");
		fscanf(afPtr,"%s",command[BE]);
		
	
	
	while(!feof(afPtr)){
	printf(afPtr,"%s",command[BE]);
	fscanf(afPtr,"%s",command[BE]);
	}
	 
	fclose(afPtr);
	}
	
	return 0;
	
}
