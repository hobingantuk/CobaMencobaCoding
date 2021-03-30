#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Struktur ADT DynamicArray

typedef struct dynamicarr_t {
    int *_arr;
    unsigned _size, _capacity;
} DynamicArray;

// Prototipe fungsi

void dArray_init(DynamicArray *darray);
bool dArray_isEmpty(DynamicArray *darray);
void dArray_pushBack(DynamicArray *darray, int value);
void dArray_popBack(DynamicArray *darray);
int  dArray_back(DynamicArray *darray);
int  dArray_front(DynamicArray *darray);
void dArray_setAt(DynamicArray *darray, unsigned index, int value);
int  dArray_getAt(DynamicArray *darray, unsigned index);
int cmpfunc (const void * a, const void * b);

// Definisi fungsi

void dArray_init(DynamicArray *darray)
{
    darray->_capacity = 2u;
    darray->_size = 0u;
    darray->_arr = (int*) malloc(sizeof(int) * 2);
}

bool dArray_isEmpty(DynamicArray *darray) {
    return (darray->_size == 0);
}

void dArray_pushBack(DynamicArray *darray, int value)
{
    if (darray->_size + 1 > darray->_capacity) {
        unsigned it;
        darray->_capacity *= 2;
        int *newArr = (int*) malloc(sizeof(int) * darray->_capacity);

        for (it=0; it < darray->_size; ++it)
            newArr[it] = darray->_arr[it];
        
        int *oldArray = darray->_arr;
        darray->_arr = newArr;
        free(oldArray);
    }
    darray->_arr[darray->_size++] = value;
}

void dArray_popBack(DynamicArray *darray) {
    if (!dArray_isEmpty(darray)) darray->_size--;
    else return;
}

int dArray_back(DynamicArray *darray) {
    if (!dArray_isEmpty(darray))
        return darray->_arr[darray->_size-1];
    else return 0;
}

int dArray_front(DynamicArray *darray) {
    if (!dArray_isEmpty(darray))
        return darray->_arr[0];
    else return 0;
}

void dArray_setAt(
    DynamicArray *darray, unsigned index, int value)
{
    if (!dArray_isEmpty(darray)) {
        if (index >= darray->_size)
            darray->_arr[darray->_size-1] = value;
        else
            darray->_arr[index] = value;
    }
}

int dArray_getAt(DynamicArray *darray, unsigned index)
{
    if (!dArray_isEmpty(darray)) {
        if (index >= darray->_size)
            return darray->_arr[darray->_size-1];
        else
            return darray->_arr[index];
    }
}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int main(int argc, char const *argv[])
{
    // Buat objek DynamicArray
    DynamicArray O,E;

    // PENTING! Jangan lupa diinisialisasi
    dArray_init(&O);
    dArray_init(&E);
    
    int X,N,i;
    
    scanf("%d",&X);
    
    for (i=0; i < X;i++) {
    scanf("%d",&N);
    
    	if(N%2==0){
    	dArray_pushBack(&E,N);
		}
		else{
		dArray_pushBack(&O,N);
		}
    }
    
    
    qsort(E._arr,E._size,sizeof(int),cmpfunc);
    qsort(O._arr,O._size,sizeof(int),cmpfunc);
    
    
	for (i=0; i <E._size; i++) {
    printf("%d\n",E._arr[i]);
    }
	for(i= O._size-1 ;i >=0; i--){
    printf("%d\n",O._arr[i]);
	}
	
    
    
    
    return 0;
}
