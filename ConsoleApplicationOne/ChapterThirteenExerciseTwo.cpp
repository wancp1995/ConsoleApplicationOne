#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 512
int main(int argc, char * argv[])
{
	FILE* source, * dest;
	char buffer[BUFFER_SIZE];
	size_t bytes;
	if (argc != 3)
	{
		printf("Usage: %s <source filename> <destination filename>", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((fopen_s(&source, argv[1], "rb") != 0) || source == NULL)
	{
		printf("Can not open %s.\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if ((fopen_s(&dest, argv[2], "wb") != 0) || dest == NULL)
	{
		printf("Can not open %s.\n"), argv[2];
		exit(EXIT_FAILURE);
	}
	while ((bytes = fread(buffer, sizeof(char), BUFFER_SIZE, source)) > 0)
		fwrite(buffer, sizeof(char), bytes, dest);
	fclose(source);
	fclose(dest);
	return 0;
}