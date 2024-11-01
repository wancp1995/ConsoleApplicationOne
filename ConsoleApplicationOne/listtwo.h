#pragma once
#ifndef  LISTTWO_H_
#define LISTTWO_H_
#include <stdbool.h>
#define TSIZE 45
#define MAXSIZE 100
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
	Item entries[MAXSIZE];
	int items;
}List;
List* InitializedList();
bool ListIsEmpty(const List* plist);
bool ListIsFull(const List* plist);
unsigned int ListItemCount(const List* plist);
bool AddItem(Item item, List* plist);
void Traverse(const List* plist, void(*pfun)(Item item));
void EmptyTheList(List* plist);
#endif // ! LISTTWO_H_
