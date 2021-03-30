#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
     
    int D,SN;
    char M[100];
    int i;
    int j;
    char cat[100]="";
    char chara;
 
   
    
    scanf("%d ",&D);
    
    
    for ( j = 0 ; j < D ; ++j){
    scanf("\n%d\n",&SN);
    fgets(M,100,stdin);
        
        
    for(i = 0; M[i] != '\0'; ++i){
        chara = M[i];
        
        if(chara >= 'a' && chara <= 'z'){
            chara = chara + SN;
            
            if(chara > 'z'){
                chara = chara - 'z' + 'a' - 1;
            }
            M[i] = chara;
        }
    }
        strcat(cat,M);
    }
    printf("%s",cat);
    
  return 0;  
}        
