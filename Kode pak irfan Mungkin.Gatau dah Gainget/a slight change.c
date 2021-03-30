#include <stdio.h>

int main() {
    int i;
    int j;
    int N;
    int b;
   
    scanf("%d", &N);
    int a[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    int counter = 0;
    for (i = 0; i < N; i++) {
        scanf("%d", &b);
        a[b]+=1;
    }
        for (j = 0; j<10; j++){
            if (a[j] > counter){
                counter=a[j];
            }
        }
    printf("%d\n", (N-counter));
            
    return 0;
}


