#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void functionA(char ch);
void functionB(char ch);
void functionC(char ch);
void showMenu();
int main(void)
{
	void (*pf[3]) (char) = { functionA , functionB, functionC };
	char ch;
	showMenu();
	scanf_s("%c", &ch);
	while (ch != 'q')
	{
		while (getchar() != '\n')
			continue;
		switch(ch)
		{
		case 'a':
			pf[0](ch);
			break;
		case 'b':
			pf[1](ch);
			break;
		case 'c':
			pf[2](ch);
			break;
		default:
			break;
		}
		showMenu();
		scanf_s("%c", &ch);
	}
	return 0;
}
void showMenu()
{
	puts("a) Function A.		b) Function B.		c) Function C.		q)Quit");
	puts("Enter a, b, c ot q:");
}
void functionA(char ch)
{
	printf("This is functionA you select %c\n", ch);
}
void functionB(char ch)
{
	printf("This is functionB you select %c\n", ch);
}
void functionC(char ch)
{
	printf("This is functionC you select %c\n", ch);
}