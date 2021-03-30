#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

/* Struktur ADT QueueArray */

typedef struct queuearr_t {
    int *_element;
    int _front, 
        _rear;
    unsigned _size, _capacity;
} QueueArray;

/* Function prototype */

void queueArray_init(QueueArray *queue, unsigned queueSize);
bool queueArray_isEmpty(QueueArray *queue);
void queueArray_push(QueueArray *queue, int value);
void queueArray_pop(QueueArray *queue);
int  queueArray_front(QueueArray *queue);
unsigned queueArray_size(QueueArray *queue);

/* Function definition below */

void queueArray_init(QueueArray *queue, unsigned queueSize)
{
    queue->_element = (int*) malloc(sizeof(int) * queueSize);
    queue->_front = -1;
    queue->_rear  = -1;
    queue->_size  = 0;
    queue->_capacity = queueSize;
}

bool queueArray_isEmpty(QueueArray *queue) {
    return (queue->_front == -1);
}

void queueArray_push(QueueArray *queue, int value)
{
    if (queue->_size + 1 <= queue->_capacity) {
        if (queue->_front == -1)
            queue->_front = 0;
        queue->_rear = (queue->_rear + 1) % queue->_capacity;
        queue->_element[queue->_rear] = value;
        queue->_size++; 
    }
}

void queueArray_pop(QueueArray *queue)
{
    if (!queueArray_isEmpty(queue)) {
        if (queue->_front == queue->_rear)
            queue->_front = queue->_rear = -1;
        else
            queue->_front = (queue->_front + 1) % queue->_capacity;
        queue->_size--;
    }
}

int queueArray_front(QueueArray *queue) 
{
    if (!queueArray_isEmpty(queue)) {
        return queue->_element[queue->_front];
    }
    return 0;
}

unsigned queueArray_size(QueueArray *queue) {
    return (queue->_size);
}

void sort(int a[],int b){
    int i,j,temp;
    
    for (i = 0; i < b; ++i) 
        {
 
            for (j = i + 1; j < b; ++j)
            {
                 
                 
                if (a[i] > a[j]) 
                {
 
                    temp =  a[i];
                    a[i] = a[j];
                    a[j] = temp;
 
                }
 
            }
 
        }
}


int main(){
     // Buat objek StackArray
    QueueArray myQueue;
    // PENTING! Jangan lupa diinisialisasi
    queueArray_init(&myQueue, 10001);
    
    int N,I[10001],C,O[1001],a,flag=1;
    
    scanf("%d %d",&N,&C);
    
    for(a=0; a < N;a++){
    
    scanf("%d %d",&I[a],&O[a]);
    
    }
    
    sort(I,N);
    sort(O,N);
    
    
            for(a=0; a < N;a++){
            queueArray_push(&myQueue,I[a]);
            }
    
    
                    
                                for(a=0;a < 1001;a++){
                                    int counter = 0;    
                                         
										 if(counter>C){
										 flag =0;
										 
										 }
										 
										 if(O[counter] == O[counter+1] ){
                                        flag=0;
                                        }
                                        if(O[counter] == O[counter+1] == O[counter+2]){
                                        flag=1;
                                    
										}
										if(O[counter]==a && O[counter] != O[counter+1] && counter <=C){
                                        queueArray_pop(&myQueue);
                                        counter++;
                                        }
                                       
                                    }    
                                
            if(queueArray_isEmpty && flag == 1){
            printf("Lancar");
            }                                
    
        
    else{
    printf("Macet");
    }
    
    
    
    return 0;
}
