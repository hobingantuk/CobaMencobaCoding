#include <stdio.h>
#include <math.h>

int main() {
    int N,n, j , i, prima;
    scanf("%d", &N);

	for(j=0;j<N;j++){
	  scanf("%d",&n);

	prima=1;
	
	 if(n == 1){
		prima = 0;
		}
    for(i = 2; i <= sqrt(n); i++) {
		
        if (n % i == 0) {
            prima =0;
            break;
        }
        
    }
	
	if(prima == 1){
        	printf("YA\n");
				}else{
        		printf("BUKAN\n");
    			}
    
	}
    return 0;
}
