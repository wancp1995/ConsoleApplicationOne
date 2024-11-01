#include <stdio.h>
#include <string.h>
#define M1 "How are ya, sweetie?"
char M2[40] = "Beat the clock.";
char* M3;
int main(void)
{
	char str[10] = "chat";
	M3 = str;
	char modifiedM1[100];
	strcpy_s(modifiedM1, sizeof(modifiedM1), M1);
	char words[80];
	printf(M1);
	puts(M1);
	puts(M2);
	puts(M2 + 1);
	strcpy_s(words,sizeof(words), M2);
	strcat_s(words, sizeof(words), " Win a toy.");
	puts(words);
	words[4] = '\0';
	puts(words);
	while (*M3)
	{
		puts(M3++);
	}
	puts(--M3);
	puts(--M3);
	M3 = modifiedM1;
	puts(M3);
	return 0;
}