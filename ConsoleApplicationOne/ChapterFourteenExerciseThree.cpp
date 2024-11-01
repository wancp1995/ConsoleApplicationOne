#include <stdio.h>
#include <string.h>
#define MAXTITLE 41
#define MAXAUTHOR 31
#define MAXBOOKS 2
struct book {
	char title[MAXTITLE];
	char author[MAXAUTHOR];
	float value;
};
char* s_gets(char* st, int n);
void listBook(struct book library[], int count);
void listBookTitle(struct book library[], int count);
void listBookValue(struct book library[], int count);
int main(void)
{
	struct book library[MAXBOOKS];
	int count = 0;
	int index;
	printf("Please enter the book title.\n");
	printf("Press [enter] at the start of a line to stop.\n");
	while (count < MAXBOOKS && s_gets(library[count].title, MAXTITLE) != NULL && library[count].title[0] != '\0')
	{
		printf("Now enter the author.\n");
		s_gets(library[count].author, MAXAUTHOR);
		printf("Now enter the value.\n");
		scanf_s("%f", &library[count++].value);
		while (getchar() != '\n')
			continue;
		if (count < MAXBOOKS)
			printf("Enter the next tilte.\n");
	}
	if (count > 0)
	{
		listBook(library, count);
		listBookTitle(library, count);
		listBookValue(library, count);
	}
	else
		printf("No books? Too bad.\n");
	printf("Done.\n");
	return 0;
}
void listBook(struct book library[], int count)
{
	printf("Here is the list of your books:\n");
	for (int index = 0; index < count; index++)
		printf("%s by %s: $%0.2f\n", library[index].title, library[index].author, library[index].value);
}
void listBookTitle(struct book library[], int count)
{
	char* ptitle[400];
	char* temp;
	int top, seek;
	for (int index = 0; index < count; index++)
		ptitle[index] = library[index].title;
	for (top = 0; top < count; top++)
	{
		for (seek = 0; seek < count - top - 1; seek++)
		{
			if (strcmp(ptitle[seek], ptitle[seek + 1]) > 0)
			{
				temp = ptitle[seek];
				ptitle[seek] = ptitle[seek + 1];
				ptitle[seek + 1] = temp;
			}
		}
	}
	printf("Here is the list of your books by title:\n");
	for (int index = 0; index < count; index++)
	{
		for (int i = 0; i < count; i++)
		{
			if (ptitle[index] == library[i].title)
			{
				printf("%s by %s: $%0.2f\n", library[i].title, library[i].author, library[i].value);
				break;
			}
		}
	}
}
void listBookValue(struct book library[], int count)
{
	float* pvalue[400];
	float* temp;
	int top, seek;
	for (int index = 0; index < count; index++)
		pvalue[index] = &library[index].value;
	for (top = 0; top < count; top++)
	{
		for (seek = 0; seek < count - top - 1; seek++)
		{
			if (*pvalue[seek]> *pvalue[seek + 1])
			{
				temp = pvalue[seek];
				pvalue[seek] = pvalue[seek + 1];
				pvalue[seek + 1] = temp;
			}
		}
	}
	printf("Here is the list of your books by value:\n");
	for (int index = 0; index < count; index++)
	{
		for (int i = 0; i < count; i++)
		{
			if (*pvalue[index] == library[i].value)
			{
				printf("%s by %s: $%0.2f\n", library[i].title, library[i].author, library[i].value);
				break;
			}
		}
	}
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