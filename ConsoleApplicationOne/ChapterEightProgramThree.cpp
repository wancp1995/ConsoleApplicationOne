#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ch;
	FILE* fp;
	char fname[50];
	errno_t err;
	printf("Enter the name of the file: ");
	scanf_s("%s", fname, (unsigned) sizeof(fname));
	err = fopen_s(&fp, fname, "r");
	if (err != 0)
	{
		printf("Failed to open file. Bye\n");
		exit(1);
	}
	while ((ch = getc(fp)) != EOF)
		putchar(ch);
	fclose(fp);
	return 0;
}