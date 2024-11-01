#include <stdio.h>
#define CHAR '$'
#define ROWS 5
int main(void)
{
	int i,j;
	for (i = 1;i <= ROWS;i++)
	{
		for (j = 1;j <= i;j++)
		{
			printf("%c", CHAR);
		}
		printf("\n");
	}
	return 0;
}