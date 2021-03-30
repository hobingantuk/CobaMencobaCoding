#include <stdio.h>

int main() {
        FILE * fp;
        char cor;
        printf("File Input\n");
        //open a file
        fp = fopen("/Users/dentabramasta/Downloads/02_file_input.txt", "w");
        //writing operation
        while ((cor = getchar()) != EOF) {
            putc(cor, fp);
        }
        //close file
        fclose(fp);
        
        return 0;
}
