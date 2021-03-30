# include<stdio.h>

void operation(int arr[], int i){
 	int res;  
    if(i == 1){
        return;
    }
    //operation 1
    res = arr[i-2] + arr[i-1];
     if(res >= 65 && res <=122){
    	return res;
    }
    //operaton 2
    res = arr[i-2] - arr[i-1];
    if(res >= 65 && res <=122){
        return res;
    }
    
    //operation 3
     res = (arr[i-2]*2) - arr[i-1];
    if(res >= 65 && res <=122){
        return res;
    }
    
    //operation 4
    res = ((arr[i-2] - 3) * 2) + arr[i-1];
	 if(res >= 65 && res <=122){
        return res;
    }   
   
    //store the not designated number
    
   
    operation(arr, i-1);
    printf("%c\n",arr[i-2]);
}

int main()
{
    int arr[] = {94, 222, 221, 186, 181, 208, 207, 110, 187, 185, 17, 212, 115, 215, 100};
    int sum = 15;
    operation(arr, sum);
    return 0;
}
