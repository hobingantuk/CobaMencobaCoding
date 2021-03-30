#include<stdio.h>
#include<string.h>

void removingSpace(char *word){
    int count = 0;
    
    int i;
    for(i = 0; i < strlen(word); i++)
    if(word[i] != ' ')
    word[count++] = word[i];
    
    word[count] ='\0';
    
}
void sort(char *x){
    int a, b,length;
    
    length =strlen(x);
   
    for(a=1;a<length;a++){
        for(b=0;b<length-a;b++){
            if(x[b]>x[b+1]){
                char temp =x[b];
                x[b] = x[b+1];
                x[b+1]=temp;
                    }
                }
            }
    
        printf("%s\n",x);
}

int main(){

  char Z[100];
  char ex[] = "exit";
  
  
  do{
    scanf ("%[^\n]%*c",Z);
    removingSpace(Z);
    if(strcmp(Z, ex)==0){
        break;
        }
        else {
        sort(Z);
        }
   }
    while(strcmp(Z,ex)!=0);
   
   return 0;
}
