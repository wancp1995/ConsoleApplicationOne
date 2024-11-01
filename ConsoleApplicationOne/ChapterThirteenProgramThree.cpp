#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41
int main(void)
{
	FILE* fp;
	char words[MAX];
	fopen_s(&fp, "wordy", "a+");
	if (fp == NULL)
	{
		fprintf(stdout, "Cann't open \"wordy\" file.\n");
		exit(EXIT_FAILURE);
	}
	puts("Enter words to add to the file; press the #");
	puts("key at the beginning of a line to terminate.");
	while ((fscanf_s(stdin, "%40s", words, (unsigned)sizeof(words)) == 1) && words[0] != '#')
		fprintf(fp, "%s\n", words);

	puts("File contents:");
	rewind(fp);
	while (fscanf_s(fp, "%s", words, (unsigned)sizeof(words)) == 1)
		puts(words);
	puts("Done!");
	if (fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");
	return 0;
}