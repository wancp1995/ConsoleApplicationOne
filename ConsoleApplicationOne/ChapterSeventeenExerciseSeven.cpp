#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "treeone.h"
char show_menu(void);
void show_item(Item item);
extern void find_word(const Tree* pt);
char* getNextWord(FILE* file, char* buffer, int size);
int main(int argc, char*argv[])
{
	char choice;
	Tree word_tree;
	FILE* fp;
	Item temp;
	if (argc != 2)
	{
		fprintf(stderr, "Usage: commond filename\n");
		exit(EXIT_FAILURE);
	}
	if (fopen_s(&fp, argv[1], "r") != 0 || fp == NULL)
	{
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	else {
		printf("File %s opened successfully.\n", argv[1]);
	}
	InitializeTree(&word_tree);
	while (fscanf_s(fp, "%s", temp.word, sizeof(temp.word)) == 1) {
		temp.times = 1;
		AddItem( &temp, &word_tree);
	}
	fclose(fp);
	printf("file is opeed, what do you want to do:\n");
	while ((choice = show_menu()) != 'q')
	{
		switch (choice)
		{
		case 's':
			Traverse(&word_tree, show_item);
			break;
		case 'r':
			find_word(&word_tree);
			break;
		case 'q':
			break;
		default:
			puts("Switching error");
			break;
		}
	}
	puts("Bye!");
	DeleteAll(&word_tree);
	return 0;
}
char show_menu(void)
{
	int ch;
	printf("s) show all words and its times\n");
	printf("r) find a word and report its times\n");
	printf("q) quit\n");
	while ((ch = getchar()) != 'q')
	{
		while (getchar() != '\n')
			continue;
		ch = tolower(ch);
		if (strchr("srq", ch) == NULL)
			puts("Please enter an s, r or q: ");
		else
			break;
	}
	return ch;
}
void show_item(Item item)
{
	printf("%s appear %d times\n", item.word, item.times);
}
