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
	int (*ptr)[2];
	int torf[2][2] = { 12, 14, 16 };
	ptr = torf;
	printf("a:\n");
	printf("**ptr = %d, **(ptr + 1) = %d\n", **ptr, **(ptr + 1));
	printf("\n");
}
void printB()
{
	int (*ptr)[2];
	int fort[2][2] = { { 12 },{ 14, 16 } };
	ptr = fort;
	printf("b:\n");
	printf("**ptr = %d, **(ptr + 1) = %d\n", **ptr, **(ptr + 1));
	printf("\n");
}
