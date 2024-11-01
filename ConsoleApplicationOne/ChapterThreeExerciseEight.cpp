#include <stdio.h>
#define CUP_PRE_PINT 2
#define OUNCE_PRE_CUP 8
#define SOUPSPOON_PER_OUNCE 2
#define TEASPOON_PER_SOUPSPOON 3
int main(void)
{
	float floatCups;
	printf("Please input numbers of cup: ");
	scanf_s("%f", &floatCups);
	printf("cup numbers: %.1f, equals pint numbers: %.1f\n",floatCups, floatCups/CUP_PRE_PINT);
	printf("cup numbers: %.1f, equals ounce numbers: %.1f\n", floatCups, floatCups * OUNCE_PRE_CUP);
	printf("cup numbers: %.1f, equals soupspoon numbers: %.1f\n",floatCups, floatCups * OUNCE_PRE_CUP * SOUPSPOON_PER_OUNCE);
	printf("cup numbers: %.1f, equals teaspoon numbers: %.1f\n",floatCups, floatCups * OUNCE_PRE_CUP * SOUPSPOON_PER_OUNCE * TEASPOON_PER_SOUPSPOON);
	return 0;
}