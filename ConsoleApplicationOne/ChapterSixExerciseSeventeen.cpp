#include <stdio.h>
int main()
{
	float totalAmount = 100.0;
	float rate = 0.08;
	int year = 0;
	do
	{
		totalAmount = totalAmount + totalAmount * rate;
		totalAmount = totalAmount - 10;
		year++;
	} while (totalAmount > 10.0);
	printf("It takes %d years for Chuckie to withdraw all the money.\n", year);
	printf("At the end of the last year, Chuckie's balance is $%.2f\n", totalAmount);
	return 0;
}