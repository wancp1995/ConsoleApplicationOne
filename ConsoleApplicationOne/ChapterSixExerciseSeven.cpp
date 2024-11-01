#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[40];
	int i;
	printf("Please enter a word:");
	scanf_s("%s", name, sizeof(name));
	printf("word : %s reverse is :", name);
	for (i = strlen(name) - 1; i >= 0; i--)
	{
		printf("%c", name[i]);
	}
	printf("\n");
	return 0;
}