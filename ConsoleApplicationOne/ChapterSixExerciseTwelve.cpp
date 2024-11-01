#include <stdio.h>
#include <math.h>
double InfiniteSequenceOne(int number);
double InfiniteSequenceTwo(int number);
int main(void)
{
	int number;
	double	oneResult,twoResult;
	printf("please enter the number to calculate: ");
	while (scanf_s("%d", &number) == 1)
	{
		if (number <= 0)
		{
			break;
		}
		oneResult = InfiniteSequenceOne(number);
		twoResult = InfiniteSequenceTwo(number);
		printf("number : %d  InfiniteSequenceOne() is %lf , InfiniteSequenceTwo() is %lf\n", number, oneResult, twoResult);
		printf("please enter the number to calculate: ");
	}
	printf("number : 100  InfiniteSequenceOne() is %lf , InfiniteSequenceTwo() is %lf\n", InfiniteSequenceOne(100), InfiniteSequenceTwo(100));
	printf("number : 1000  InfiniteSequenceOne() is %lf , InfiniteSequenceTwo() is %lf\n", InfiniteSequenceOne(1000), InfiniteSequenceTwo(1000));
	printf("number : 10000  InfiniteSequenceOne() is %lf , InfiniteSequenceTwo() is %lf\n", InfiniteSequenceOne(10000), InfiniteSequenceTwo(10000));
	printf("Done!\n");
	return 0;
}
double InfiniteSequenceOne(int number)
{
	double item, sum = 0.0;
	int i;
	for (i = 0; i < number; i++)
	{
		item = 1.0 / (i + 1.0);
		sum += item;
	}
	return sum;
}
double InfiniteSequenceTwo(int number)
{
	double item, sum = 0.0;
	int i;
	for (i = 0; i < number; i++)
	{
		item = (1.0 / (i + 1.0)) *  pow(-1,i);
		sum += item;
	}
	return sum;
}