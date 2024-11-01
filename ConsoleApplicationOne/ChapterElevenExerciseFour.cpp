#include <stdio.h>
#define SIZE 40
char* getWord(char* out, int n);
int main(void)
{
	char output[SIZE];
	getWord(output, 5);
	printf("First word you input is %s\n", output);
	return 0;
}
char* getWord(char* out, int n)
{
	char input[SIZE];
	int i = 0;
	char* in = input;
	puts("Enter a string:");
	fgets(input, SIZE, stdin);
	while ((*in == '\n' || *in == '\t' || *in == ' ') && *in != '\0')
		in++;
	while (*in != '\n' && *in != '\t' && *in != ' ' && *in != '\0' && i < n)
	{
		*out++ = *in++;
		i++;
	}
	*out++ = '\0';
	return out;
}