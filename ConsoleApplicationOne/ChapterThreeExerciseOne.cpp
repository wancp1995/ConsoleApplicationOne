#include<stdio.h>
#include<limits.h>	//integer max defined
#include<float.h>	//float max min defined
int main(void)
{
	int intMax = INT_MAX;
	printf("int original intMax: %d, overflow intMax: %d\n",intMax, intMax + 1);
	unsigned int unsignedIntMax = UINT_MAX;
	printf("unsigned int original unsignedIntMax: %u, overflow unsignedIntMax: %u\n", unsignedIntMax, unsignedIntMax + 1);
	float floatMax = FLT_MAX;
	float floatOverflow = floatMax * 2.0;
	printf("float original floatMax: %e, overflow floatOverflow: %e\n", floatMax, floatOverflow);
	float floatMin = FLT_MIN;
	float floatUnderflow = floatMin / 2.0;
	printf("float original floatMin: %e, underflow floatUnderflow: %e\n", floatMin, floatUnderflow);
	return 0;
}