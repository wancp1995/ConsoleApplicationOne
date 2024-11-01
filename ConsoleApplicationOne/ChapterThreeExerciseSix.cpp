#include <stdio.h>
#define MASS_PER_QUART 950
#define MASS_PER_MOLE 3.0E-23
int main(void)
{
	float floatQuart;
	double numbersOfWater;
	printf("Enter quart number of water: ");
	scanf_s("%f",&floatQuart);
	numbersOfWater = floatQuart * MASS_PER_QUART / MASS_PER_MOLE;
	printf("You input quarts of water: %f, has about numbers of water: %e\n",floatQuart,numbersOfWater);
	return 0;
}