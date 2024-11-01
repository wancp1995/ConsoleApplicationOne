#include <stdio.h>
#include <string.h>
char* s_gets(char *st, int n);
#define MAXTITLE 41
#define MAXAUTHOR 31
struct book {
	char title[MAXTITLE];
	char author[MAXAUTHOR];
	float value;
};
int main(void)
{
	struct book library;
	printf("Please enter the book title.\n");
	s_gets(library.title, MAXTITLE);
	printf("Now enter the author.\n");
	s_gets(library.author, MAXAUTHOR);
	printf("Now enter the value.\n");
	scanf_s("%f", &library.value);
	printf("%s by %s: $%0.2f\n", library.title, library.author, library.value);
	printf("%s: \"%s\" ($%0.2f)\n", library.author, library.title, library.value);
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