#include <stdio.h>
#define CHAR '$'
int main(void)
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c",CHAR);
		}
		printf("\n");
	}
	return 0;
}