#include <stdio.h>
int main(void)
{
	printf("Type int has a sizeof of %zd bytes.\n",sizeof(int)); 
	printf("Type char has a sizeof of %zd bytes.\n", sizeof(char));
	printf("Type long has a sizeof of %zd bytes.\n", sizeof(long));
	printf("Type long long has a sizeof of %zd bytes.\n", sizeof(long long));
	printf("Type double has a sizeof of %zd bytes.\n", sizeof(double));
	printf("Type long double has a sizeof of %zd bytes.\n", sizeof(long double));
	return 0;
}