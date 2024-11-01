#include <stdio.h>
#define MAX_LENGTH 255
int main()
{
	char name[MAX_LENGTH];
	int count = 0;
	printf("Enter the char in a line:");
	do
	{
		scanf_s("%c", &name[count]);
	} while (name[count]!='\n'&& ++count);
	printf("The reverse char of the data:");
	for (count--;count >= 0; count--)
	{
		printf("%c", name[count]);
	}
	printf("\nDone!\n");
	return 0;
}