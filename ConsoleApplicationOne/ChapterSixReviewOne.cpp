#include <stdio.h>
int main(void)
{
	int quack = 2;
	printf("one quack = %d\n", quack);
	quack += 5;
	printf("two quack = %d\n", quack);
	quack *= 10;
	printf("three quack = %d\n", quack);
	quack -= 6;
	printf("four quack = %d\n", quack);
	quack /= 8;
	printf("five quack = %d\n", quack);
	quack %= 3;
	printf("six quack = %d\n", quack);
	return 0;
}