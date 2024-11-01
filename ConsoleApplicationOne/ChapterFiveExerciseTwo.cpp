#include <stdio.h>
int main(void)
{
	int num,count=0;
	printf("Print Continue 10 Numbers!\n");
	printf("Enter a number to print:");
	scanf_s("%d",&num);
	while (count++ <= 10)
	{
		printf("%d ",num++);
	}
	printf("\n");
	return 0;
}