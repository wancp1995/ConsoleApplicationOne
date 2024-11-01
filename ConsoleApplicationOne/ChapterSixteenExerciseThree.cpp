#include <stdio.h>
#include <math.h>
#define PI 3.14
typedef struct polar_v {
	double magnitude;
	double angle;
} Polar_V;
typedef struct rect_v {
	double x;
	double y;
} Rect_V;
Rect_V polar_to_rect(Polar_V);
int main(void)
{
	Rect_V result;
	Polar_V input;
	puts("Enter magnitude and angle; enter q to quit: ");
	while (scanf_s("%lf %lf", &input.magnitude, &input.angle) == 2)
	{
		input.angle = input.angle * (PI / 180.0);
		result = polar_to_rect(input);
		printf("x = %0.2f, y = %0.2f\n", result.x, result.y);
		puts("Enter magnitude and angle; enter q to quit: ");
	}
	puts("Bye.");
	return 0;
}
Rect_V polar_to_rect(Polar_V pv)
{
	Rect_V rv;
	rv.x = pv.magnitude * cos(pv.angle);
	rv.y = pv.magnitude * sin(pv.angle);
	return rv;
}
