#include <stdio.h>
void printA();
void printB();
void printC();
void printD();
int main()
{
	printA();
	printB();
	printC();
	printD();
	return 0;
}
void printA()
{
	int x = (int) 3.8 + 3.3;
	printf("a: x = %d\n", x);
}
void printB()
{
	int x = (2 + 3) * 10.5;
	printf("b: x = %d\n", x);
}
void printC()
{
	int x = 3 / 5 * 22.0;
	printf("c: x = %d\n", x);
}
void printD()
{
	int x = 22.0 * 3 / 5;
	printf("d: x = %d\n", x);
}