#include <stdio.h>
int checkBits(int num, int position);
int main()
{
	int num, position;
	printf("Please enter the number and the position:");
	scanf_s("%d %d", &num, &position);
	printf("%d  position of %d number is %d", position, num, checkBits(num, position));
	return 0;
}
int checkBits(int num, int position)
{
	return 1 & (num >> position) ? 1 : 0;
}