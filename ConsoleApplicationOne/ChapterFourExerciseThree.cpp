#include <stdio.h>
int main(void)
{
	float numberOne,numberTwo;
	printf("Enter your floating-number:");
	scanf_s("%f %f",&numberOne,&numberTwo);
	printf("The input is %.1f or %.1e.\n",numberOne,numberOne);
	printf("The input os %+.3f or %.3E\n", numberTwo ,numberTwo);
	return 0;
}