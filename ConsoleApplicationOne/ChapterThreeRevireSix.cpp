#include <stdio.h>
void printOne();
void printTwo();
void printThree();
void printFour();
void printFive();
void printSix();
void printSeven();
void printEight();
void printNine();
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
	printNine();
	return 0;
}
void printOne()
{
	int one = 12;
	printf("one = %d\n",one);
}
void printTwo()
{
	unsigned int two = 0X3;
	printf("two = %#X\n",two);
}
void printThree()
{
	char three = 'C';
	printf("three = %c\n",three);
}
void printFour()
{
	double four = 2.34E07;
	printf("four = %e\n",four);
}
void printFive()
{
	char five = '\040';
	printf("five = %c\n",five);
}
void printSix()
{
	double six = 7.0;
	printf("six = %f\n",six);
}
void printSeven()
{
	long seven = 6L;
	printf("seven = %ld\n",seven);
}
void printEight()
{
	float eight = 6.0f;
	printf("eight = %f\n",eight);
}
void printNine()
{
	float nine = 0x5.b6p12;
	printf("nine = %a\n",nine);
}