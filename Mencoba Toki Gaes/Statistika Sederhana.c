#include<stdio.h>

int main()
{
int i,n,A,B;
scanf("%d",&n);

int N[n];

for(i=0;i<n;++i)
scanf("%d",&N[i]);

A=B=N[0];

for(i=1;i<n;++i)
{
if(N[i]>A)
A=N[i];

if(N[i]<B)
B=N[i];
}

printf("%d %d",A,B);

return 0;
}
