#include <stdio.h>
#define CM 2.54

int main()
{
	float inch = 1.0;
	printf("Input inch numbers:\n");
	scanf_s("%f",&inch);
	printf("%.2f inch equals %.2f cm",inch, inch * CM);
	return 0;
}