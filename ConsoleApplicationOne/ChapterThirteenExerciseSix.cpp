#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40
int main(int argc, char* argv[])
{
	FILE* in, * out;
	int ch;
	char name[LEN];
	int count = 0;
	char input[LEN];
	printf("Please input file name:");
	scanf_s("%s", input, sizeof(input));
	if ((fopen_s(&in, input, "r") != 0) ||in == NULL)
	{
		fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	strncpy_s(name, input, LEN - 5);
	name[LEN - 5] = '\0';
	strcat_s(name, ".red");
	if ((fopen_s(&out, name, "w") != 0) || out == NULL)
	{
		fprintf(stderr, "Can't create ouput file.\n");
		exit(3);
	}
	while ((ch = getc(in)) != EOF)
		if (count++ % 3 == 0)
			putc(ch, out);
	if ((fclose(in) != 0) || (fclose(out) != 0))
		fprintf(stderr, "Error in closing files\n");
	return 0;
}