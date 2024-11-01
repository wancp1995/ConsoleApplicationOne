#include <stdio.h>
int main(void)
{
	float daphne, deirdre;
	daphne = deirdre = 100.0;
	int year = 0;
	do
	{
		daphne = daphne + 100.0 * 0.1;
		deirdre = deirdre + deirdre * 0.05;
		year++;
	} while ((daphne - deirdre) > 0);
	printf("Need years: %d, depane is %.f, deirdre is %.f",year, daphne, deirdre);
	return 0;
}