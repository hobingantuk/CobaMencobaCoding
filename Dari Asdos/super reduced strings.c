#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/* Struktur ADT StackArray */

typedef struct stackarr_t
{
    char *_element;
    int _topIndex;
    unsigned int _size, _capacity;
} StackArray;

/* Function prototype */

void stackArray_init(StackArray *stack, unsigned stackSize);
bool stackArray_isEmpty(StackArray *stack);
void stackArray_push(StackArray *stack, char value);
void stackArray_pop(StackArray *stack);
char stackArray_top(StackArray *stack);

/* Function definition below */

void stackArray_init(StackArray *stack, unsigned int stackSize)
{
    stack->_element = (char *)malloc(sizeof(char) * stackSize);
    stack->_size = 0;
    stack->_topIndex = -1;
    stack->_capacity = stackSize;
}

bool stackArray_isEmpty(StackArray *stack)
{
    return (stack->_topIndex == -1);
}

void stackArray_push(StackArray *stack, char value)
{
    if (stack->_size + 1 <= stack->_capacity)
    {
        stack->_element[++stack->_topIndex] = value;
        stack->_size++;
    }
}

void stackArray_pop(StackArray *stack)
{
    if (!stackArray_isEmpty(stack))
    {
        stack->_topIndex--;
        stack->_size--;
    }
}

char stackArray_top(StackArray *stack)
{
    if (!stackArray_isEmpty(stack))
    {
        return stack->_element[stack->_topIndex];
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    // Buat objek StackArray
    StackArray myStack;
    // PENTING! Jangan lupa diinisialisasi
    stackArray_init(&myStack, 1001);
    int  i,  j;
    char s[1001];
    scanf("%s", s);
        
    
    for (i = 0; i < strlen(s); i++)
    {
            if (stackArray_isEmpty(&myStack))
            {
                stackArray_push(&myStack, s[i]);
            }
            else if (stackArray_top(&myStack) == s[i])
            {
                stackArray_pop(&myStack);
            }
            else
            {
                stackArray_push(&myStack, s[i]);
            }
        }
    
   
    int size = myStack._size;

    if (stackArray_isEmpty(&myStack))
    {
        printf("Empty String");
    }
    else
    {
        for (j = 0; j < size; j++)
        {
            s[j] = stackArray_top(&myStack);
            stackArray_pop(&myStack);
        }
        for (j = size - 1; j >= 0; j--)
        {
            printf("%c", s[j]);
        }
    }
    return 0;
    }
    

