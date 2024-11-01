#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	int ch;
	FILE* fp;
	unsigned long count = 0;
	char filename[100];
	fprintf(stdout, "Please input filename\n");
	scanf_s("%s", filename, sizeof(filename));
	fopen_s(&fp, filename, "r");
	if (fp == NULL)
	{
		printf("Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);
		count++;
	}
	fclose(fp);
	printf("File %s has %lu characters\n", filename, count);
	return 0;
}