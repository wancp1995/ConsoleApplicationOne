#include <stdio.h>
#define SIZE 40
char* getWord(char * out);
int main(void)
{
	char output[SIZE];
	getWord(output);
	printf("First word you input is %s\n", output);
	return 0;
}
char* getWord(char* out)
{
	char input[SIZE];
	char* in = input;
	puts("Enter a string:");
	fgets(input, SIZE, stdin);
	while ((*in == '\n' || *in == '\t' || *in == ' ') && *in != '\0')
		in++;
	while (*in != '\n' && *in != '\t' && *in != ' ' && *in != '\0')
	{
		*out++ = *in++;
	}
	*out++ = '\0';
	return out;
}