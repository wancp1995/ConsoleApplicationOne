#include <stdio.h>
#include <stdbool.h>
void printA();
void printB();
void printC();
int main(void)
{
	printA();
	printB();
	printC();
	return 0;
}
void printA()
{
	bool a = 100 > 3 && 'a' > 'c';
	printf("a is : %s\n", a ? "true" : "false");
}
void printB()
{
	bool b = 100 > 3 || 'a' > 'c';
	printf("b is : %s\n", b ? "true" : "false");
}
void printC()
{
	bool c = !(100 > 3);
	printf("c is : %s\n", c ? "true" : "false");
}