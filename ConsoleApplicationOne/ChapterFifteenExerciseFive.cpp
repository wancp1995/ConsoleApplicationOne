#include <stdio.h>
int rotate_l(unsigned int number, int num);
int main()
{
	int number, num, result;
	printf("Please enter the number and the rotate num:");
	scanf_s("%d %d", &number, &num);
	result = rotate_l(number, num);
	printf("%d number rotate %d num is %d\n", number, num, rotate_l(number, num));
}
int rotate_l(unsigned int number, int num)
{
	int sizes = sizeof(unsigned int) * 8;
	num = num % sizes;
	return (number << num) | (number >> (sizes - num));
}