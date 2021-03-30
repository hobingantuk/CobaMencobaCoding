#include <stdio.h>



int main() {
    int row;
    int col;
    scanf("%d %d", &row, &col);
    
    int i;
    int j;
        for(i = 0; i < row; i++) {
            for(j = 0; j < row; j++) {
                if(i<col || i>=row-col || j<col || j>=row-col)
                printf("*");
                else{
                    printf(" ");
                }
            }
        
            printf("\n");
        }
    return 0;
}

