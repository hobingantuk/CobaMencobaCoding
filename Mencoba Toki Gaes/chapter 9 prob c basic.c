#include <stdio.h>


int mode(int x[],int y) {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < y; ++i) {
      int count = 0;
      
      for (j = 0; j < y; ++j) {
         if (x[j] == x[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = x[i];
      }
   }

   return maxValue;
}


int main(){
	int n,max;
	
	
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0;i < n ; i++){
	scanf("%d",&a[i]);
	}
	
	printf("%d",mode(a,n));
	
}
