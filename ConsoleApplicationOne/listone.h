#pragma once
#pragma once
#ifndef  LISTONE_H_
#define LISTONE_H_
#include <stdbool.h>
#define TSIZE 45
struct film {
	char title[TSIZE];
	int rating;
};
typedef struct film Item;
typedef struct node {
	Item item;
	struct node* next;
}Node;
typedef struct list
{
	Node* head;
	Node* end;
}List;
//typedef Node* List;
void InitializedList(List* plist);
bool ListIsEmpty(const List* plist);
bool ListIsFull(const List* plist);
unsigned int ListItemCount(const List* plist);
bool AddItem(Item item, List* plist);
void Traverse(const List* plist, void(*pfun)(Item item));
void EmptyTheList(List* plist);
#endif // ! LISTONE_H_
