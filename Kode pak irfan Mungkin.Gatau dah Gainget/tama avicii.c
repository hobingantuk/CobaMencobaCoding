#include <stdio.h>


int main(){
	int N;
	int row[N],col[N];
	int j,x,y,z;
	
	scanf("%d",&N);
	 for(j=0; j < N; j++) {
          scanf("%d %d",&row[j],&col[j]);
		}
	
	
	
  	for(x = 0; x < N; x++){
        for(y = 0; y<row[x];y++){
            for( z = 0; z < col[x]; z++){
                if (z==y+1) {
                    printf("%c", ' ');
                }else{
                    printf("%c", '*');
                }
            }
          printf("\n");
        }
         printf("\n"); 
    }
    return 0;
}

		

