#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef struct stackNode_t {
    char data;
    struct stackNode_t *next;
} StackNode;

typedef struct stack_t {
    StackNode *_top;
    unsigned _size;
} Stack;

void stack_init(Stack *stack);
bool stack_isEmpty(Stack *stack);
void stack_push(Stack *stack, char value);
void stack_pop(Stack *stack);
char stack_top(Stack *stack);
unsigned stack_size(Stack *stack);

void stack_init(Stack *stack){
    stack->_size = 0;
    stack->_top = NULL;
}

bool stack_isEmpty(Stack *stack) {
    return (stack->_top == NULL);
}

void stack_push(Stack *stack, char value){
    StackNode *newNode = (StackNode*) malloc(sizeof(StackNode));
    if (newNode) {
        stack->_size++;
        newNode->data = value;

        if (stack_isEmpty(stack)) newNode->next = NULL;
        else newNode->next = stack->_top;

        stack->_top = newNode;
    }
}

void stack_pop(Stack *stack){
    if (!stack_isEmpty(stack)) {
        StackNode *temp = stack->_top;
        stack->_top = stack->_top->next;
        free(temp);
        stack->_size--;
    }
}

char stack_top(Stack *stack){
    if (!stack_isEmpty(stack))
        return stack->_top->data;
    return 0;
}

unsigned stack_size(Stack *stack) {
    return stack->_size;
}

int main(int argc, char const *argv[])
{

    Stack gacha;
    stack_init(&gacha);
    int n,i,j,out=0;

    scanf("%d",&n);

    for(i=0;i<n;i++){

        // Fills in FACE if stack is empty
        if(stack_isEmpty(&gacha)){
            stack_push(&gacha, 'F');
            stack_push(&gacha, 'A');
            stack_push(&gacha, 'C');
            stack_push(&gacha, 'E');
        }

        // 4 letter input here
        char temp[5];
        scanf("%s",temp);
        for(j=0;j<4;j++){
            stack_push(&gacha, temp[j]);
        }

        // Temporary Strings
        char a[5],b[5];

        //Fills in a & b temp string
        for(j=0;j<4;j++){
            // b string is inserted reversed compared to the stack
            // example : AFCE -->> ECFA
            b[j] = stack_top(&gacha);
            stack_pop(&gacha);
        }
        for(j=0;j<4;j++){
            // a string stays the way it was on the stack
            // example : AFCE -->> AFCE
            a[3-j] = stack_top(&gacha);
            stack_pop(&gacha);
        }
        
        // compare both string
        if(strcmp(a,b)==0)
            out++; 
        else{
            for(j=0;j<4;j++){
                stack_push(&gacha, a[j]);
            }
            for(j=0;j<4;j++){
                stack_push(&gacha, b[3-j]);
            }
        }
    }

    printf("%d",out);
    return 0;
}
