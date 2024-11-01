#include <stdio.h>
#define ROWS 6
int main(void)
{
	char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j;
	char ch;
	for (i = 1; i <= ROWS; i++)
	{
		for (j = 1, ch = lets[5]; j <= i; j++, ch--)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	return 0;
}