#pragma once
#ifndef _TREEONE_H_
#define _TREEONE_H_
#include <stdbool.h>
#define SLEN 20
typedef struct item
{
	char word[SLEN];
	int times;
}Item;
#define MAXITEMS 1000
typedef struct trnode
{
	item item;
	struct trnode* left;
	struct trnode* right;
}Trnode;
typedef struct tree
{
	Trnode* root;
	int size;
}Tree;
void InitializeTree(Tree* ptree);
bool TreeIsEmpty(const Tree* ptree);
bool TreeIsFull(const Tree* ptree);
int TreeItemCount(const Tree* ptree);
bool AddItem(const Item* pi, Tree* ptree);
bool InTree(const Item* pi, const Tree* ptree);
bool DeleteItem(const Item* pi, Tree* ptree);
void Traverse(const Tree* ptree, void (*pfun)(Item item));
void DeleteAll(Tree* ptree);
#endif // !_TREEONE_H_
