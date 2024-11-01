#include <stdio.h>
long square(int number);
int main(void)
{
	int number = 2;
	long longSquare = square(number);
	printf("%d sqaure is %ld", number, longSquare);
	return 0;
}
long square(int number)
{
	long result;
	result = (long) number * number;
	return result;
}

