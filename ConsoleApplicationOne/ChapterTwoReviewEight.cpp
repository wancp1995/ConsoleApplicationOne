#include <stdio.h>
void printfStatus(int a, int b);
int main(void)
{
	int a, b;
	a = 5;
	b = 2;	/*��7��*/
	printfStatus(a,b);
	b = a;	/*��8��*/
	printfStatus(a,b);
	a = b;	/*��9��*/
	printfStatus(a,b);
	printf("%d %d\n",a,b);
	return 0;
} 
void printfStatus(int a, int b)
{
	printf("After operation : a = %d , b = %d\n", a,  b);
}