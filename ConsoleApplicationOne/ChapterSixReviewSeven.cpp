#include <stdio.h>
void printA();
void printB();
int main()
{
	printA();
	printB();
	return 0;
}
void printA()
{
	printf("a:\n");
	int i = 0;
	while (++i < 4)
		printf("Hi! ");
	do
		printf("Bye! ");
	while (i++ < 8);
	printf("\n");
}
void printB()
{
	printf("b:\n");
	int i;
	char ch;
	for (i = 0, ch = 'A'; i < 4; i++, ch += 2 * i)
	{
		printf("%c",ch);
	}
	printf("\n");
}