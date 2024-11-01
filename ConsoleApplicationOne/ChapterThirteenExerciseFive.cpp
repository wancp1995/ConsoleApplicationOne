#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSZIE 4096
#define SLEN 81
void append(FILE* source, FILE* dest);
char* s_gets(char* st, int n);
int main(int argc, char *argv[])
{
	FILE* fa, * fs;
	int files = 0;
	char file_app[SLEN];
	char file_src[SLEN];
	int ch;
	if (argc < 3)
	{
		fprintf(stderr, "Usage: %s dest_file src_file.", argv[0]);
		exit(EXIT_FAILURE);
	}
	fopen_s(&fa, argv[1], "a+");
	if (fa == NULL)
	{
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fa, NULL, _IOFBF, BUFSZIE) != 0)
	{
		fputs("Can't create output buffer\n", stderr);
		exit(EXIT_FAILURE);
	}
	files = argc - 2;
	while (files > 0)
	{
		fopen_s(&fs, file_src, "r");
		if (fopen_s(&fs, argv[argc - files],"r") != 0 || fs ==NULL)
		{
			fprintf(stderr, "Can't open %s\n", argv[argc - files]);
		}
		else
		{
			if (setvbuf(fs, NULL, _IOFBF, BUFSZIE) != 0)
			{
				fputs("Can't create input buffer\n", stderr);
				continue;
			}
			append(fs, fa);
			if (ferror(fs) != 0)
				fprintf(stderr, "Error in reading file %s.\n", argv[argc - files]);
			if (ferror(fa) != 0)
				fprintf(stderr, "Error in writing file %s.\n", file_app);
			fclose(fs);
			printf("File %s appended.\n", argv[argc - files]);
			if (files > 0)
				printf("Next file %s:\n", argv[argc - (--files)]);
			else
				printf("No more file to appended.\n");
		}
	}
	printf("Done appending. %d files appended.\n", files);
	rewind(fa);
	printf("%s contents:\n", file_app);
	while ((ch = getc(fa)) != EOF)
		putchar(ch);
	puts("Done displaying.");
	fclose(fa);
	return 0;
}
void append(FILE* source, FILE* dest)
{
	size_t bytes;
	static char temp[BUFSZIE];
	while ((bytes = fread(temp, sizeof(char), BUFSZIE, source)) > 0)
		fwrite(temp, sizeof(char), bytes, dest);
}
char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}