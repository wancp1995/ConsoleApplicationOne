#include <stdio.h>
int main(void)
{
	float nOne = 3.0;
	double nTwo = 3.0;
	long nThree = 2000000000;
	long nFour = 1234567890;
	printf("%.1e %.1e %.1e %.1e\n", nOne, nTwo, nThree, nFour);
	printf("%ld %ld\n", nThree, nFour);
	printf("%ld %ld %ld %ld\n", nOne, nTwo, nThree, nFour);
	return 0;
}