#include <stdio.h>
void printA();
void printB();
void printC();
void printD();
int main(void)
{
	printA();
	printB();
	printC();
	printD();
	return 0;
}
void printA()
{
	printf("a: ");
	putchar('H');
	printf("\n");
}
void printB()
{
	printf("b: ");
	putchar('\007');
	printf("\n");
}
void printC()
{
	printf("c: ");
	putchar('\n');
	printf("\n");
}
void printD()
{
	printf("d: ");
	putchar('\b');
	printf("\n");
}