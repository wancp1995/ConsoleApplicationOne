#pragma once
#ifndef _QUEUEONE_H
#define _QUEUEONE_H
#include <stdbool.h>
typedef struct item 
{
	long arrive;
	int processtime;
} Item;
#define MAXQUEUE 10
typedef struct node
{
	Item item;
	struct node* next;
} Node;
typedef struct queue
{
	Node* front;
	Node* rear;
	int items;
} Queue;
void InitializeQueue(Queue* pq);
bool QueueIsFull(const Queue* pq);
bool QueueIsEmpty(const Queue* pq);
int QueueItemCount(const Queue* pq);
bool EnQueue(Item item, Queue* pq);
bool DeQueue(Item* pitem, Queue* pq);
void EmptyTheQueue(Queue* pq);
#endif // !_QUEUE_H