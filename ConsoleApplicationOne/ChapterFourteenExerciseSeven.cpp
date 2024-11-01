#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10
char* s_gets(char* st, int n);
struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
	int deleteFlag;
};
int main(void)
{
	struct book library[MAXBKS];
	int count = 0;
	int index, filecount;
	FILE* pbooks;
	int size = sizeof(struct book);
	char modifyChoice, deleteChoice;
	if (fopen_s(&pbooks, "book.dat", "r+b") != 0 || pbooks == NULL)
	{
		fputs("Can't open book.dat file\n", stderr);
		exit(EXIT_FAILURE);
	}
	rewind(pbooks);
	while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
	{
		if (count == 0)
			puts("Current contents of book.dat:");
		printf("%s by %s: %.2f\n", library[count].title, library[count].author, library[count].value);
		count++;
	}
	filecount = count;
	if (count == MAXBKS)
	{
		fputs("The book.dat file is full.", stderr);
		exit(EXIT_FAILURE);
	}
	printf("Do you want to modify library?(y/n):");
	scanf_s("%c", &modifyChoice, sizeof(modifyChoice));
	if (modifyChoice == 'y')
	{
		for (int i = 0; i < count; i++)
		{
			printf("%s by %s: %.2f\n", library[i].title, library[i].author, library[i].value);
			while (getchar() != '\n')
				continue;
			puts("Do you want to delete this book?(y/n):");
			scanf_s("%c", &deleteChoice, sizeof(deleteChoice));
			if (deleteChoice == 'y')
				library[i].deleteFlag = 1;
		}
	}
	while (getchar() != '\n')
		continue;
	puts("Please add new book titles.");
	puts("Press [enter] at the start of a line to stop.");
	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
	{
		puts("Now enter the author.");
		s_gets(library[count].author, MAXAUTL);
		puts("Now enter the value.");
		scanf_s("%f", &library[count].value);
		library[count++].deleteFlag = 0;
		while (getchar() != '\n')
			continue;
		if (count < MAXBKS)
			puts("Enter the next title.");
	}
	freopen_s(&pbooks,"book.dat", "wb", pbooks);
	rewind(pbooks);
	if (count > 0)
	{
		puts("Here is the list of your books:");
		for (index = 0; index < count; index++)
		{
			if (library[index].deleteFlag != 1)
			{
				printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
				fwrite(&library[index], size, 1, pbooks);
			}
		}
	}
	else
		puts("No books? Too bad.\n");
	puts("Bye.\n");
	fclose(pbooks);
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