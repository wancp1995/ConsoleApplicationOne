#include <stdio.h>
void printA();
void printB();
void printC();
int main()
{
	printA();
	printB();
	printC();
	return 0;
}
void printA()
{
	printf("a:\n");
	int x = 0;
	while (++x < 3)
		printf("%4d", x);
	printf("\n");
}
void printB()
{
	printf("b:\n");
	int x = 100;
	while (x++ < 103)
		printf("%4d\n",x);
		printf("%4d\n",x);
	printf("\n");
}
void printC()
{
	printf("c:\n");
	char ch = 's';
	while (ch < 'w')
	{
		printf("%c",ch);
		ch++;
	}
	printf("%c\n",ch);
	printf("\n");
}