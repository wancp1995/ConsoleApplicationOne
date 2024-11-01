#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	FILE* fp;
	char ch;
	if (argc < 2)
	{
		printf("Usage: %s <filename> ", argv[0]);
		exit(EXIT_FAILURE);
	}
	for (int i = 1; i < argc; i++)
	{
		fp = NULL;
		if ((fopen_s(&fp, argv[i], "r") != 0) && fp == NULL)
		{ 
			printf("Can not open file %s\n", argv[i]);
			continue;
		}
		printf("Now print file %s:\n", argv[i]);
		while ((ch = getc(fp)) != EOF)
		{
			putchar(ch);
		}
		printf("\n");
		fclose(fp);
	}
	return 0;
}