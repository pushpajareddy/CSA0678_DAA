#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_SIZE 100
typedef struct 
{
    int stack[MAX_SIZE];
    int top;
} Stack;

void init(Stack *s) 
{
    s->top = -1;
}
bool is_empty(Stack *s) 
{
    return s->top == -1;
}
bool is_full(Stack *s) 
{
    return s->top == MAX_SIZE - 1;
}
void push(Stack *s, int val) 
{
    if (is_full(s)) {
        printf("Stack is full.\n");
        exit(EXIT_FAILURE);
    }
    s->top++;
    s->stack[s->top] = val;
}
int pop(Stack *s) 
{
    if (is_empty(s)) 
	{
        printf("Stack is empty.\n");
        exit(EXIT_FAILURE);
    }
    int val = s->stack[s->top];
    s->top--;
    return val;
}
int main() 
{
    int n, k, c;
    printf("Enter the number of containers: ");
    scanf("%d", &n);
    Stack s;
    init(&s);
    for (int i = 0; i < n; i++) 
	{
        printf("Enter the container number: ");
        scanf("%d", &c);
        push(&s, c);
        if (is_full(&s)) {
            printf("Stack is full. Removing the bottom container: %d\n", pop(&s));
        }
    }
    printf("The containers in the stack from top to bottom are: ");
    while (!is_empty(&s)) 
	{
        printf("%d ", pop(&s));
    }
    printf("\n");
}
