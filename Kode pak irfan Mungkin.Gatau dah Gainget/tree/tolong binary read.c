#include <stdio.h>
#include <stdlib.h>
int main() {
        FILE * ap;
        char cor;
        printf("File Input\n");
        //open a file
        ap = fopen("02_file_input.txt", "w");
        //writing operation
        while ((cor = getchar()) != EOF) {
            putc(cor, ap);
        }
        //close file
        fclose(ap);
        printf("Data Entered:\n");
        //reading
        ap = fopen("02_file_input.txt", "r");
        while ((cor = getc(ap)) != EOF) {
            printf("%c", c);
        }
    return 0;    
}



