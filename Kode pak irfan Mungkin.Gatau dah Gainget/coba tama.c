#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
 
int main(){
	char message[10000], chara;
	int i,D,j,key;
	char cat[100000];
	char enter[2] = {"\n"};
	
	scanf("%d",&D);
	
	for ( j = 0 ; j < D ; j++){
	printf("Enter a message to encrypt: ");
	scanf("%s",&message);
	printf("Enter key: ");
	scanf("%d", &key);

	
	
	for(i = 0; message[i] != '\0'; ++i){
		chara = message[i];
		
		if(chara >= 'a' && chara <= 'z'){
			chara = chara + key;
			
			if(chara > 'z'){
				chara = chara - 'z' + 'a' - 1;
			}
			
			message[i] = chara;
		}
		else if(chara >= 'A' && chara <= 'Z'){
			chara = chara + key;
			
			if(chara > 'Z'){
				chara = chara - 'Z' + 'A' - 1;
			}
			
			message[i] = chara;
			}
	
		}
		strcat(cat,message);
		strcat(cat,enter);
	}
	printf("Encrypted message: \n%s",cat);
		
	
	return 0;
}
