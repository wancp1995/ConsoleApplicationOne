#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"
int main(void)
{
	Stack* pstack;
	int i = 0;
	Item ch;
	pstack = InitializeStack();
	char str[MAXSTACK];
	printf("Enter a string to Test stack:");
	scanf_s("%s", str, sizeof(str));
	while (!StackIsFull(pstack))
	{
		if (str[i] != '\0')
		{
			Push(str[i], pstack);
			i++;
		}
		else
			break;
	}
	while (!StackIsEmpty(pstack))
	{
		Pop(&ch, pstack);
		printf("%c", ch);
	}
	EmptyTheStack(pstack);
	printf("\nDone!\n");
	return 0;
}
Stack* InitializeStack(void)
{
	Stack* stack = (Stack*)malloc(sizeof(Stack));
	if (stack == NULL)
	{
		fprintf(stderr, "No memory for allocation!\n");
		exit(EXIT_FAILURE);
	}
	stack->top = 0;
}
bool StackIsFull(const Stack* stack)
{
	if (stack->top == MAXSTACK - 1)
		return true;
	else
		return false;
}
bool StackIsEmpty(const Stack* stack)
{
	if (stack->top == 0)
		return true;
	else
		return false;
}
bool Push(Item item, Stack* stack)
{
	if (StackIsFull(stack))
	{
		fprintf(stderr, "stack is full.\n");
		return false;
	}
	stack->items[stack->top + 1] = item;
	stack->top++;
	return true;
}
bool Pop(Item* pitem, Stack* stack)
{
	if (StackIsEmpty(stack))
	{
		fprintf(stderr, "stack is empty.\n");
		return false;
	}
	*pitem = stack->items[stack->top];
	stack->top--;
	return true;
}
void EmptyTheStack(Stack* stack)
{
	if (stack != NULL)
		free(stack);
}