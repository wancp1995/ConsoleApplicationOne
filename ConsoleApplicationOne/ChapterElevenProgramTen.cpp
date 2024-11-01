#include <stdio.h>
#define STLEN 10
char* s_gets(char* st, int n);
int main(void)
{
	char words[STLEN];
	int i;
	puts("Enter strings (empty line to quit):");
	while (s_gets(words, STLEN) != NULL && words[0] != '\n')
	{
		puts(words);
	}
	puts("done");
	return 0;
}
char* s_gets(char * st, int n)
{
	char* ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);
	if (ret_val != NULL)
	{
		while (st[i] != '\0' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}