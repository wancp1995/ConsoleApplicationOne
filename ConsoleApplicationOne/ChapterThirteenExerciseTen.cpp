#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE* fp;
	char filename[40];
	long position;
	char ch;
	printf("Input filename:");
	scanf_s("%s", filename, sizeof(filename));
	if ((fopen_s(&fp, filename, "r") != 0) || fp == NULL)
	{
		fprintf(stderr, "Can not open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		printf("Enter a file position (negative to quit):");
		if (scanf_s("%ld", &position) != 1 || position < 0)
			break;
		if (fseek(fp, position, SEEK_SET) != 0)
		{
			fprintf(stderr, "Error seeking position %ld in files.\n", position);
			continue;
		}
		printf("Content from position %ld:", position);
		while ((ch = fgetc(fp)) != EOF && ch != '\n')
			putchar(ch);
		putchar('\n');
	}
	fclose(fp);
	return 0;
}