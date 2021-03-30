#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int row[n],column[n];
    int i;
    int a;
    int j;
    for(i=0; i<n;i++){
        scanf("%d %d",&row[i],&column[i]);
    }

    for(a=0; a<n; a++){
        for(i=0; i<row[a];i++){
            for( j=0; j<column[a]; j++){
                if (j==i+1) {
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

