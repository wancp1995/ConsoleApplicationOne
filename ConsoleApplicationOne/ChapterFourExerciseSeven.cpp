#include <stdio.h>
#include <float.h>
int main(void)
{
	float floatNumber = 1.0 / 3.0;
	double doubleNumber = 1.0 / 3.0;
	printf("float one third(6): %.6f\n",floatNumber);
	printf("float one third(12): %.12f\n", floatNumber);
	printf("float one third(16): %.16f\n", floatNumber);
	printf("double one third(6): %.6f\n", doubleNumber);
	printf("double one third(12): %.12f\n", doubleNumber);
	printf("double one third(16): %.16f\n", doubleNumber);
	printf("FLT_DIG in float.h: %d\n",FLT_DIG);
	printf("DBL_DIG in float.h: %d\n",DBL_DIG);
	return 0;
}