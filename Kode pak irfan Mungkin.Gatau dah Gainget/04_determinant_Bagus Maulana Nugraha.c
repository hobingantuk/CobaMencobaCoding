#include <stdio.h>

int main(){
	
	int a,b,c,d,e,f,g,h,i;
	int determinant;
	printf("Enter The Matrix!\n\n");
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d %d %d",&d,&e,&f);
	scanf("%d %d %d",&g,&h,&i);
	
	determinant = (a*e*i+b*f*g+c*d*h)-(a*f*h+b*d*i+c*e*g);
	
	printf("\n\nThe Determinant of Matrix Is %d\n",determinant);
	
	if(determinant==0){
	printf("The matrix cannot be inverted\n");
	}
	else{
	printf("The matrix is invertible\n");
	}
	
	return 0;
}
