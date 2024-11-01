#include <stdio.h>
int main(void)
{
	char ch = '\r';
	printf("dec = %d; octal = %#o; hex = %#x\n",ch,ch,ch);
	char dec = 13;
	char octal = '\015';
	char hex = '\xd';
	printf("dec: %c\n",dec);
	printf("octal: %c\n",octal);
	printf("hex: %c\n",hex);
	return 0;
}