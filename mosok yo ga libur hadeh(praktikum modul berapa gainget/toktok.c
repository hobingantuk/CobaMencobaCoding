#include <stdio.h>

int linearSearch(int arr[], int n, int f) {
   int i;
   for (i = 0; i < n; i++) 
        if (arr[i] == f) 
            return 1; 
    return -1; 
     
   
    
}

int main(){
    int N;
    
    scanf("%d",&N);
    
    int X[N];
    int a;
    
    for(a=0;a < N;a++){
    scanf("%d",&X[a]);
    }
    
    int F;
    scanf("%d",&F);
    
    int result;
    
    result = linearSearch(X,N,F);
    
    if(result == -1){
    printf("Jan Maen-Maen !!!\n");
    }
    else{
    printf("Ahh Mantab !!!\n");
    }
    
    return 0;    
}
