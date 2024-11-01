#include <stdio.h>
void printA();
void printB();
int main(void)
{
	printA();
	printB();
	return 0;
}
void printA()
{
	char ch;
	printf("a: \n");
	while ((ch = getchar()) != 'i')
		putchar(ch);
	printf("\n");
	while ((ch = getchar()) != '\n')
		continue;
}
void printB()
{
	char ch;
	printf("b: \n");
	while ((ch = getchar()) != '\n')
	{
		putchar(ch++);
		putchar(++ch);
	}
}