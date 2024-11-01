#include <stdio.h>
int main(void)
{
	char ch;
	printf("Please enter a charactor.\n");
	scanf_s("%c", &ch);
	printf("THe code for %c is %d.\n",ch, ch);
	return 0;
}