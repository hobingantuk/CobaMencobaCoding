#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

/* Struktur Node */

typedef struct pqueueNode_t {
    int data;
    struct pqueueNode_t *next;
} PQueueNode;

/* Struktur ADT PriorityQueue menggunakan Linked List */

// Prioritas default: nilai minimum
typedef struct pqueue_t {
    PQueueNode *_top;
    unsigned _size;
} PriorityQueue;

/* Function prototype */

void pqueue_init(PriorityQueue *pqueue);
bool pqueue_isEmpty(PriorityQueue *pqueue);
void pqueue_push(PriorityQueue *pqueue, int value);
void pqueue_pop(PriorityQueue *pqueue);
int  pqueue_top(PriorityQueue *pqueue);

/* Function definition below */

void pqueue_init(PriorityQueue *pqueue)
{
    pqueue->_top = NULL;
    pqueue->_size = 0;
}

bool pqueue_isEmpty(PriorityQueue *pqueue) {
    return (pqueue->_top == NULL);
}

void pqueue_push(PriorityQueue *pqueue, int value)
{
    PQueueNode *temp = pqueue->_top;
    PQueueNode *newNode = \
        (PQueueNode*) malloc (sizeof(PQueueNode));
    newNode->data = value;
    newNode->next = NULL;

    if (pqueue_isEmpty(pqueue)) {
        pqueue->_top = newNode;
        return;
    }

    if (value < pqueue->_top->data) {
        newNode->next = pqueue->_top;
        pqueue->_top = newNode;
    }
    else {
        while ( temp->next != NULL && 
                temp->next->data < value)
            temp = temp->next;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void pqueue_pop(PriorityQueue *pqueue)
{
    if (!pqueue_isEmpty(pqueue)) {
        PQueueNode *temp = pqueue->_top;
        pqueue->_top = pqueue->_top->next;
        free(temp);
    }
}

int pqueue_top(PriorityQueue *pqueue) {
    if (!pqueue_isEmpty(pqueue))
        return pqueue->_top->data;
    else return 0;
}

int main(int argc, char const *argv[])
{
    // Buat objek PriorityQueue
    PriorityQueue in,out;

    // PENTING! Jangan lupa diinisialisasi
    pqueue_init(&in);
    pqueue_init(&out);
	int N,I[10001],C,O[1001],a,time,overcap=0,parked=0;
    
    scanf("%d %d",&N,&C);
    
    for(a=0; a < N;a++){
    
    scanf("%d %d",&I[a],&O[a]);
	pqueue_push(&in, I[a]);
    pqueue_push(&out, O[a]);
    }
    
    for(time=0;time < 24;time++){
		if(time == pqueue_top(&in)){
					parked++;
					pqueue_pop(&in);
					}
						if(time == pqueue_top(&out)){
						parked--;
						pqueue_pop(&out);
						}
		if(parked > C){
	 	overcap = 1;
		break;
		}
						 
	}
	
	if(overcap==1){
	printf("Macet");
	}
    
	
	else{
    printf("Lancar");
    }
    return 0;
}
