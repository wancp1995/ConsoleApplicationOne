#include <stdio.h>
int main(void)
{
	char nameOne[11], nameTwo[11];
	int count;
	printf("Please enter 2 names.\n");
	count = scanf_s("%5s %10s", nameOne, sizeof(nameOne), nameTwo, sizeof(nameTwo));
	printf("I read the %d name %s and %s.\n", count, nameOne, nameTwo);
	return 0;
}