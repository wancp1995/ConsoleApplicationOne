#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ch;
	FILE* fp;
	char filename[50];
	unsigned long count = 0;
	printf("Enter the name of the file: ");
	scanf_s("%s", filename, sizeof(filename));
	if (fopen_s(&fp, filename, "r") != 0)
	{
		printf("Failed to open file. Bye\n");
		exit(1);
	}
	while ((ch = getc(fp)) != EOF)
	{
		putchar(ch);
		count++;
	}
	fclose(fp);
	printf("\nThe file contais %lu characters\n", count);
	getchar();
	return 0;
}