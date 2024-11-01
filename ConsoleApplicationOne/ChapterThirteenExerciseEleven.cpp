#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 256
int main(int argc, char* argv[])
{
	FILE* fp;
	char line[SIZE];
	char* found;
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <string> [filename]...\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((fopen_s(&fp, argv[2], "r") != 0) || fp == NULL)
	{
		fprintf(stderr, "Can't open file %s.\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, SIZE, fp) != NULL)
	{
		found = strstr(line, argv[1]);
		if (found != NULL)
			puts(line);
	}
	fclose(fp);
	return 0;
}