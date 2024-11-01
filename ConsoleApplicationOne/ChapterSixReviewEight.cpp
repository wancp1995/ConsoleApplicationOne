#include <stdio.h>
void printA();
void printB();
void printC();
void printD();
void clear_input_buffer();
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
	char ch;
	scanf_s("%c", &ch);
	while (ch != 'g')
	{
		printf("%c", ch);
		scanf_s("%c", &ch);
	}
	printf("\n");
	clear_input_buffer();
}
void printB()
{
	printf("b: ");
	char ch;
	scanf_s("%c", &ch);
	while (ch != 'g')
	{
		printf("%c", ++ch);
		scanf_s("%c", &ch);
	}
	printf("\n");
	clear_input_buffer();
}
void printC()
{
	printf("c: ");
	char ch;
	do 
	{
		scanf_s("%c", &ch);
		printf("%c", ch);
	} while (ch != 'g');
	printf("\n");
	clear_input_buffer();
}
void printD()
{
	printf("d: ");
	char ch;
	scanf_s("%c", &ch);
	for (ch = '$'; ch != 'g'; scanf_s("%c", &ch))
	{
		printf("%c", ch);
	}
	printf("\n");
	clear_input_buffer();
}
void clear_input_buffer()
{
	int c;
	while ((c =getchar()) != '\n' && c != EOF);
}
