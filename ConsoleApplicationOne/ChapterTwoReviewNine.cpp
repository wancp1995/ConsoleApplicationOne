#include <stdio.h>
void printfStatus(int x, int y);
int main(void)
{
	int x, y;
	x = 10;
	y = 5;		/*��7��*/
	printfStatus(x,y);
	y = x + y;	/*��8��*/
	printfStatus(x,y);
	x = x * y;	/*��9��*/
	printfStatus(x,y);
	printf("%d %d\n", x, y);
	return 0;
}
void printfStatus(int x, int y)
{
	printf("After operation : x = %d , y = %d\n", x, y);
}