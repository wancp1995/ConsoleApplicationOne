#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int amount;
	printf("How many words you wish to enter?");
	scanf_s("%d", &amount);
	printf("Enter %d words now:", amount);
	char** paChar = (char**)malloc(amount * sizeof(char *));
	for (int i = 0; i < amount; i++)
	{
		char temp[100];
		scanf_s("%s",temp, sizeof(temp));
		int length = strlen(temp);
		char* str = (char*)malloc(length * sizeof(char));
		strcpy_s(str,strlen(temp) + 1,temp);
		*(paChar + i) = str;
	}
	for (int i = 0; i < amount; i++)
	{
		printf("%s\n", *(paChar + i));
	}
	free(paChar);
	printf("Done!\n");
	return 0;
}