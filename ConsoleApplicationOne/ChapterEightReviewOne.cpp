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
	printf("a:\n");
	putchar(getchar());
	printf("\n");
}
void printB()
{
	//printf("b:\n");
	//getchar(putchar(' '));
	//printf("\n");
}