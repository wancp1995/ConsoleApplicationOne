#include <stdio.h>
int main(void)
{
	char name[100] = "World";
	printf("Hello, %s\n", name);
	fprintf(stdout, "Hello, %s\n", name);
	fprintf(stderr, "Hello, %s\n", name);
	return 0;
}