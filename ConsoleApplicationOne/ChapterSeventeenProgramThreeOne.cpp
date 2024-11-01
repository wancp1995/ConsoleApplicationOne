#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listtwo.h"
static void CopyToNode(Item item, Item* plist);
List* InitializedList()
{
	List *plist = (List*)malloc(sizeof(List));
	if (plist != NULL)
		(*plist).items = 0;
	else
		exit(EXIT_FAILURE);
	return plist;
}
bool ListIsEmpty(const List* plist)
{
	if ((*plist).items == 0)
		return true;
	else
		return false;
}
bool ListIsFull(const List* plist)
{
	bool full;
	if ((*plist).items == MAXSIZE)
		full = true;
	else
		full = false;
	return full;
}
unsigned int ListItemCount(const List* plist)
{
	return (unsigned int)(*plist).items;
}
bool AddItem(Item item, List* plist)
{
	if (ListIsFull(plist))
		return false;
	CopyToNode(item,&(plist->entries[(*plist).items]));
	plist->items++;
	return true;
}
void Traverse(const List* plist, void(*pfun)(Item item))
{
	int i = 0;
	while (i < (*plist).items)
	{
		(*pfun)((*plist).entries[i]);
		i++;
	}
}
void EmptyTheList(List* plist)
{
	(*plist).items = 0;
}
static void CopyToNode(Item item,  Item* pentry)
{
	strcpy_s(pentry->title, TSIZE, item.title);
	pentry->rating = item.rating;
}