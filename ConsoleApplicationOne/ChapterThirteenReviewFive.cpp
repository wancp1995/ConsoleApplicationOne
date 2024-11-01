#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_LENGTH 256
int main(int argc, char* argv[])
{
	if (argc < 3)
	{
		fprintf(stderr, "Usage %s <character> <filename>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	char targetChar = argv[1][0];
	const char* filename = argv[2];
	FILE* fp;
	if (fopen_s(&fp, filename, "r") != 0 || fp == NULL)
	{
		perror("Error opening file");
		exit(EXIT_FAILURE);
	}
	char line[MAX_LINE_LENGTH];
	while (fgets(line, sizeof(line), fp) != NULL)
	{
		if (strchr(line, targetChar) != NULL)
		{
			puts(line);
		}
	}
	fclose(fp);
	return 0;
}