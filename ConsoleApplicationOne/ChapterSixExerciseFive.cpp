#include <stdio.h>
int main(void)
{
	int i, j, rows;
	char ch, ich, jch;
	printf("Please a char:");
	scanf_s("%c", &ch);
	rows = ch - 'A' + 1;
	for (i = 1; i <= rows; i++)
	{
		for (j = rows - i; j >= 0; j--)
		{
			printf(" ");
		}
		for (ich = 'A', j = 1; j <= i; ich++, j++)
		{
			printf("%c", ich);
		}
		for (jch = ch - 1, j = 1; j <= i - 1;jch--,j++) 
		{
			printf("%c", jch);
		}
		printf("\n");
	}
	return 0;
}