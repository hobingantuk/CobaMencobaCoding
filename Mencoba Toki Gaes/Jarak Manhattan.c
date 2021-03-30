#include <stdio.h>
#include <stdlib.h>

int main () {
   int a,b,w,x,y,z,res;

   scanf("%d %d %d %d",&w,&x,&y,&z);
   
   a = w - y;
   b = x - z; 
   
   res = abs(a)+abs(b);
   printf("%d", res);
   
   return 0;
}
