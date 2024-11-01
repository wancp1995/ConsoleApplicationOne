#include <stdio.h>
void chline(char ch, int rows, int cols);
int main(void)
{
	char ch;
	int i, j;
	printf("Enter the character you want to print:");
	scanf_s("%c", &ch);
	printf("Enter the rows and cols you want to print:");
	scanf_s("%d %d", &i, &j);
	chline(ch, i, j);
	return 0;
}
void chline(char ch, int rows, int cols)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
}
