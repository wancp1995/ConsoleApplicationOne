#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define BUFFER_SIZE 512
int main(void)
{
	FILE* source;
	char buffer[BUFFER_SIZE];
	char filename[100];
	char ch;
	int count = 0;
	printf("Please input filename:");
	scanf_s("%s", filename, sizeof(filename));
	if ((fopen_s(&source, filename, "r+") != 0) || source == NULL)
	{
		printf("Can not open %s.\n", filename);
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(source)) != EOF && count < BUFFER_SIZE)
	{
		buffer[count++] = ch;
	}
	rewind(source);
	for (int i = 0; i < count; i++)
	{
		fputc(tolower(buffer[i]), source);
	}
	fclose(source);
	return 0;
}