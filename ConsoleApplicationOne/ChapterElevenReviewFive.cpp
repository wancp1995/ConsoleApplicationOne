#include <stdio.h>
char* pr(char* str);
int main()
{
	char str[] = "Ho Ho Ho!";
	pr(str);
	char strOne[] = "";
	//pr(strOne);
	return 0;
}
char* pr(char * str)
{
	char* pc;
	pc = str;
	while (*pc)
	{
		putchar(*pc++);
	}
	do 
	{
		putchar(*--pc);
	} while (pc - str);
	return pc;
}
char* prOne(char* str)
{
	char* pc;
	pc = str;
	while (*pc)
	{
		putchar(*pc++);
	}
	do
	{
		putchar(*pc--);
	} while (pc - str);
	return pc;
}