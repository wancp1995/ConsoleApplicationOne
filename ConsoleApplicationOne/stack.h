#pragma once
#ifndef _STACK_H_
#define _STACK_H_
#include <stdbool.h>
#define MAXSTACK 100
typedef int Item;
typedef struct stack
{
	Item items[MAXSTACK];
	int top;
}Stack;
Stack* InitializeStack(void);
bool StackIsFull(const Stack* stack);
bool StackIsEmpty(const Stack* stack);
bool Push(Item item, Stack* stack);
bool Pop(Item* pitem, Stack* stack);
void EmptyTheStack(Stack* stack);
#endif // !_STACK_H_
