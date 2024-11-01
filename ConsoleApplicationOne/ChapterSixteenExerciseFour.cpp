#include <stdio.h>
#include <time.h>
void delay(double seconds);
int main(void)
{
	double seconds;
	printf("Enter a second to delay:");
	scanf_s("%lf", &seconds);
	delay(seconds);
	return 0;
}
void delay(double seconds)
{
	clock_t start = clock();
	printf("Now let's test %.1lf second delay\n", seconds);
	clock_t now = clock();
	while (((double)(now - start)) / CLOCKS_PER_SEC < seconds)
	{
		now = clock();
		printf("You delay %.1lf second.\n", ((double)(now - start)) / CLOCKS_PER_SEC);
	}
}