#include<stdio.h>
#include<string.h>


void ascend(int arr[], int item){
    int i,j;
    
    
    for(i =0; i< item; i++){
        for(j = 0; j < item -i -1; j++){
            if(arr[j] > arr[j+1]){
                int dump = arr[j];
                arr[j] = arr[j +1];
                arr [j+1] = dump;
                
            }
        }
        
    }
}

void descend(int arr[], int item){
    int i,j;
    
    for(i =0; i< item; i++){
        for(j = 0; j < item -i -1; j++){
            if(arr[j] < arr[j+1]){
                int dump = arr[j];
                arr[j] = arr[j +1];
                arr [j+1] = dump;
                
            }
        }
        
    }
}


void print(int arr[], int item){
    int i;
    for(i = 0; i < item; i++){
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}

int main(){
    int T,N;
    char choose;
    int i[50000];
    int a, b;
    scanf("%d", &T);
    
    
    for(a = 0; a < T; a++){
        scanf("%d", &N);
        for(b = 0; b < N; b++){
            scanf("%d", &i[b]);
            
        }
        scanf(" %c", &choose);
        
		switch(choose){
		
        
        case('A'):
            ascend(i, N);
            print(i,N);
            break;
                
        case('D'):
               descend(i, N);
               print(i,N);
               break;
        }
    }
    
    return 0;
}
