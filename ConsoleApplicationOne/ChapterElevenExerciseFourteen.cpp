#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		printf("Please input 3 arguments.\n");
		return 0;
	}
	double base = atof(argv[1]);
	int exponent = atoi(argv[2]);
	double result = pow(base, exponent);
	printf("The %g 's %d pow is %g\n", base, exponent, result);
}