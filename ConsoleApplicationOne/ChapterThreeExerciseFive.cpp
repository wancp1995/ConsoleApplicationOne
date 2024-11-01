#include <stdio.h>
#define SECONDS_PER_YEAR 3.156E7
int main(void)
{
	int age;
	float seconds;
	printf("Please enter your age: ");
	scanf_s("%d",&age);
	seconds = age * SECONDS_PER_YEAR;
	printf("Your age is: %d, equals seconds: %e\n",age, seconds);
	return 0;
}