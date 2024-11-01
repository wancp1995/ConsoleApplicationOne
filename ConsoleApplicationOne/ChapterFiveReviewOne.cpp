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
	int x = (2 + 3) * 6;
	printf("a: x = %d\n", x);
}
void printB()
{
	int x = (12 + 6) / 2 * 3;
	printf("b: x = %d\n", x);
}
void printC()
{
	int x, y;
	y = x = (2 + 3) / 4;
	printf("c: x = % d, y = % d\n", x, y);
}
void printD()
{
	int x, y;
	y = 3 + 2 * (x = 7 / 2);
	printf("d: x = % d, y = % d\n", x, y);
}