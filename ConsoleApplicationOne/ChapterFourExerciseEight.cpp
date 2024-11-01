#include <stdio.h>
#define LITER_PER_GALLON 3.785
#define KM_PER_MILE 1.609
int main(void)
{
	float miles, gallons;
	printf("Input your travel miles:");
	scanf_s("%f",&miles);
	printf("Input your oils you speend(gallon):");
	scanf_s("%f",&gallons);
	printf("america standard: %.1f\n",miles/gallons);
	printf("europe standard: %.1f\n",(gallons * LITER_PER_GALLON) / (miles * KM_PER_MILE ) * 100);
	return 0;
}