#include <stdio.h>
#include <string.h>
char* s_gets(char* st, int n);
#define MAXTITLE 41
#define MAXAUTHOR 31
#define MAXBOOKS 2
struct book {
	char title[MAXTITLE];
	char author[MAXAUTHOR];
	float value;
};
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
		printf("Here is the list of your books:\n");
		for (index = 0; index < count; index++)
			printf("%s by %s: $%0.2f\n", library[index].title, library[index].author, library[index].value);
	}
	else
		printf("No books? Too bad.\n");
	printf("Done.\n");
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