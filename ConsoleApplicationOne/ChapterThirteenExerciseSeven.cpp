#include <stdio.h>
#include <stdlib.h>
#define MAX_LINE 1024
int main(int argc, char* argv[])
{
	FILE* fpOne, * fpTwo;
	char lineOne[MAX_LINE], lineTwo[MAX_LINE];
	if (argc != 3)
	{
		fprintf(stderr,"Usage: %s <filename> <filenae>", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((fopen_s(&fpOne, argv[1], "r") != 0) || fpOne == NULL)
	{
		fprintf(stderr, "Open file %s failed\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if ((fopen_s(&fpTwo, argv[2], "r") != 0) || fpTwo == NULL)
	{
		fprintf(stderr, "Open file %s failed\n", argv[2]);
		fclose(fpOne);
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		if (fgets(lineOne, MAX_LINE, fpOne) != NULL)
			printf("%s", lineOne);
		if (fgets(lineTwo, MAX_LINE, fpTwo) != NULL)
			printf("%s", lineTwo);
		if (feof(fpOne) && feof(fpTwo))
			break;
	}
	fclose(fpOne);
	fclose(fpTwo);
	return 0;
}