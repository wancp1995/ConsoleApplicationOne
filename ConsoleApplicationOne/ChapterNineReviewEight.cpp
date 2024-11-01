#include <stdio.h>
int max(int firstNumber, int secondNumber, int thirdNumber);
int main(void)
{
	int firstNumber = 1;
	int secondNumber = 2;
	int thirdNumber = 3;
	printf("in three number(%d %d %d), largestNumber is %d", firstNumber, secondNumber, thirdNumber, max(firstNumber,secondNumber,thirdNumber));
	return 0;
}
int max(int firstNumber, int secondNumber, int thirdNumber)
{
	int largestNumber;
	if (firstNumber > secondNumber)
		largestNumber = firstNumber;
	else
		largestNumber = secondNumber;
	if (largestNumber < thirdNumber)
		largestNumber = thirdNumber;
	return largestNumber;
}