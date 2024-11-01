#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int countCharInFile(FILE* fp, char target);
int main(int argc, char* argv[])
{
	FILE* fp;
	int count = 0;
	char targetChar;
	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s <character> [filename1] [filename2]...\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	targetChar = argv[1][0];
	if (argc == 2)
	{
		printf("Reading form standard input...\n");
		count = countCharInFile(stdin, targetChar);
		printf("There are %d character '%c' in yout input\n", count, targetChar);
	}
	else
	{
		for (int i = 2; i < argc; i++)
		{
			count = 0;
			fp = NULL;
			if (fopen_s(&fp, argv[i], "r") != 0 || fp == NULL)
			{
				fprintf(stderr, "Error: Can't open file %s\n", argv[i]);
				continue;
			}
			count = countCharInFile(fp, targetChar);
			printf("There are %d character '%c' in yout input\n", count, targetChar);
			fclose(fp);

		}
	}
	return 0;
}
int countCharInFile(FILE* fp, char target)
{
	int count = 0;
	char ch;
	while ((ch = fgetc(fp)) != EOF)
	{
		if (ch == target)
			count++;
	}
	return count;
}