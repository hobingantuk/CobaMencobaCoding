#include <stdio.h>
#include <strings.h>

void reverseArray(int arr[], int start, int end)
{
	int temp;
	while (start < end)
	{
		temp = arr[start]; 
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	} 
}	 

void printArray(int arr[], int size)
{
int i;
for (i=0; i < size; i++)
	printf("%d\n", arr[i]);

printf("\n");
} 


void curse(int arr[],int y){
	
	int res;
	res= num[i]+nume;
	if(res>=65&&res<=125) return res;
	
	res = x-y;
	if(res>=65&&res<=125) return res;
	
	res = (x*2)-y;
	if(res>=65&&res<=125) return res;
	
	res= (x-3)*2+y;
	return res;
}
}


int main(){
	char xeon;
	int num[15]= {94,222,221,186,181,208,207,110,187,185,17,212,115,215,100};
	int n = sizeof(num) / sizeof(num[0]); 
	reverseArray(num, 0, n-1);
	for (i=0; i < size; i++){
	int nume = num[i]+1 	
	curse(nume[i],nume)
	}
	return 0;

	
}
