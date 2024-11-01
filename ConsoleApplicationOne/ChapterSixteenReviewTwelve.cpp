#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	printf("The square root of %f is %f\n", argv[1], sqrt(atof(argv[1])));
}