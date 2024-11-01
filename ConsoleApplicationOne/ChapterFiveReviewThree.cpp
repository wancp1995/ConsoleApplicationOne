#include <stdio.h>
void printA();
void printB();
void printC();
void printD();
void printE();
void printF();
int main()
{
	printA();
	printB();
	printC();
	printD();
	printE();
	printF();
	return 0;
}
void printA()
{
	double x = 30.0 / 4.0 * 5.0;
	printf("a: x = %.1f\n", x);
}
void printB()
{
	double x = 30.0 / (4.0 * 5.0);
	printf("b: x = %.1f\n", x);
}
void printC()
{
	int x = 30 / 4 * 5;
	printf("c: x = %d\n", x);
}
void printD()
{
	int x = 30 * 5 / 4;
	printf("d: x = %d\n", x);
}
void printE()
{
	double x = 30 / 4.0 * 5;
	printf("e: x = %.1f\n",x);
}
void printF() 
{
	double x = 30 / 4 * 5.0;
	printf("f: x = %.1f\n", x);
}
