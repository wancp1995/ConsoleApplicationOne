#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032'
#define SLEN 81
int main(void)
{
	char file[SLEN];
	char ch;
	FILE* fp;
	long count, last;
	puts("Enter the name of the file to be processed:");
	scanf_s("%80s", file, sizeof(file));
	fopen_s(&fp, file, "rb");
	if (fp == NULL)
	{
		printf("reserve can't open %s\n", file);
		exit(EXIT_FAILURE);
	}
	fseek(fp, 0L, SEEK_END);
	last = ftell(fp);
	for (count = 1L; count <= last; count++)
	{
		fseek(fp, -count, SEEK_END);
		ch = getc(fp);
		if (ch != CNTL_Z && ch != '\r')
			putchar(ch);
	}
	putchar('\n');
	fclose(fp);
	return 0;
}