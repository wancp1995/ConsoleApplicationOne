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
	int* ptr;
	int torf[2][2] = { 12, 14, 16 };
	ptr = torf[0];
	printf("a:\n");
	printf("*ptr = %d, *(ptr + 2) = %d\n", *ptr, *(ptr + 2));
	printf("\n");
}
void printB()
{
	int* ptr;
	int fort[2][2] = { { 12 },{ 14, 16 } };
	ptr = fort[0];
	printf("b:\n");
	printf("*ptr = %d, *(ptr + 2) = %d\n", *ptr, *(ptr + 2));
	printf("\n");
}
