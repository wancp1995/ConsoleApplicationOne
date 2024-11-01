#include <stdio.h>
void printOne();
void printTwo();
void printThree();
void printFour();
void printFive();
void printSix();
void printSeven();
void printEight();
int main(void)
{
	printOne();
	printTwo();
	printThree();
	printFour();
	printFive();
	printSix();
	printSeven();
	printEight();
	return 0;
}
void printOne()
{
	unsigned int one = 012;
	printf("one = %#o\n", one);
}
void printTwo()
{
	long double two = 2.9e05L;
	printf("two = %Le\n", two);
}
void printThree()
{
	char three = 's';
	printf("three = %c\n", three);
}
void printFour()
{
	long four = 100000;
	printf("four = %ld\n", four);
}
void printFive()
{
	char five = '\n';
	printf("five = %c\n", five);
}
void printSix()
{
	float six = 20.0f;
	printf("six = %f\n", six);
}
void printSeven()
{
	unsigned int seven = 0x44;
	printf("seven = %#x\n", seven);
}
void printEight()
{
	int eight = -40;
	printf("eight = %d\n", eight);
}

