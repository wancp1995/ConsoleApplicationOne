#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41
int getNumber(FILE* fp);
int main(void)
{
	FILE* fp;
	char words[MAX];
	int count = 1;
	if ((fopen_s(&fp, "wordy", "a+") != 0) || fp == NULL)
	{
		fprintf(stdout, "Cann't open \"wordy\" file.\n");
		exit(EXIT_FAILURE);
	}
	count = getNumber(fp);
	puts("Enter words to add to the file; press the #");
	puts("key at the beginning of a line to terminate.");
	while ((fscanf_s(stdin, "%40s", words, (unsigned)sizeof(words)) == 1) && words[0] != '#')
		fprintf(fp, "%d.%s\n",++count, words);

	puts("File contents:");
	rewind(fp);
	while (fscanf_s(fp, "%s", words, (unsigned)sizeof(words)) == 1)
		puts(words);
	puts("Done!");
	if (fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");
	return 0;
}
int getNumber(FILE* fp)
{
	int i = 0;
	char temp[MAX];
	rewind(fp);
	while (fgets(temp, MAX, fp) != NULL)
		i++;
	return i;
}
