#include<stdio.h>
void printfA();
void printfB();
void printfC();
void printfD();
int main(void)
{
	printf("a: ");
	printfA();
	printf("b: ");
	printfB();
	printf("c: ");
	printfC();
	printf("d: ");
	printfD();
	return 0;
}
void printfA()
{
	printf("Baa Baa Black Sleep.");
	printf("Have you any wool?\n");
}
void printfB()
{
	printf("Begone!\nO creature of lard!\n");
}
void printfC()
{
	printf("What?\nNo/nfish?\n");
}
void printfD()
{
	int num;
	num = 2;
	printf("%d + %d = %d",num, num, num + num);
}