#include <stdio.h>
void printCubeValue(double n);
int main(void)
{
	double num;
	printf("Enter a number(double):");
	scanf_s("%lf",&num);
	printCubeValue(num);
	return 0;
}
void printCubeValue(double n)
{
	double result = n * n *n;
	printf("number :%.1f , cube result is %.1f\n",n,result);
}