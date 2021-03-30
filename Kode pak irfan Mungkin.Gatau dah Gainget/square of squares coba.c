#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int q[n];
	int x;
	int i,j,k,l;
	int t;
	

	while(n>0){
	 // loops checking the sum of squares
	 int cek=0;
	 scanf("%d",&q)
	 for(x=0;x < n;x++){ 
    	for ( i = 0; i * i <= q[x]; i++) { 
        	for (j = 0; j * j <= q[x]; j++) { 
            	for (k = 0; k * k <= q[x]; k++) { 
                	for (l = 0; l * l <= q[x]; l++) { 
  						// if sum of four squares equals  the given number 
                    	if (i * i + j * j + k * k + l * l == q[x]) { 
  						cek=1;
  						break;
  						}	
					}
				}
			}
		}
	}
	if (cek==1){
		printf("LEAVE");
	}
	else{
		printf("ERASE");
	}
return 0;
}
