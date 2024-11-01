#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TSIZE 45

struct film {
	char title[TSIZE];
	int rating;
	struct film* next;
	struct film* pre;
};
char* s_gets(char* st, int n);
int main(void)
{
	struct film* head = NULL;
	struct film* prev = NULL, * current = NULL;
	char input[TSIZE];
	puts("Enter first movie title:");
	while (s_gets(input, TSIZE) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));
		if (head == NULL)
		{
			head = current;
			current->pre = NULL;
		}
		else
		{
			prev->next = current;
			current->pre = prev;
		}
		current->next = NULL;
		strcpy_s(current->title, input);
		puts("Enter your rating <0-10>:");
		scanf_s("%d", &current->rating);
		while (getchar() != '\n')
			continue;
		puts("Enter the movie title (empty line to stop):");
		prev = current;
	}
	if (head == NULL)
		printf("NO data entered. ");
	else 
	{
		printf("Here is the movie list(by sequence):\n");
		current = head;
		while (current != NULL)
		{
			printf("Movie: %s Rating: %d\n", current->title, current->rating);
			current = current->next;
		}
		printf("Here is the movie list(by inverted sequence):\n");
		current = prev;
		while (current != NULL)
		{
			printf("Movie: %s Rating: %d\n", current->title, current->rating);
			current = current->pre;
		}
		current = head;
		while (current != NULL)
		{
			head = current->next;
			free(current);
			current = head;
		}
	}
		
	printf("Bye!\n");
	return 0;
}
char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}