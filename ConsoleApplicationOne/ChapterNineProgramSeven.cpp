#include <stdio.h>
long fact(int n);
long rfact(int n);
int main(void)
{
	int num;
	printf("This program calculates factorials.\n");
	printf("Enter a value in the range of 0-12 (q to quit):\n");
	while (scanf_s("%d", &num) == 1)
	{
		if (num < 0)
			printf("No negative numbers, please.\n");
		else if (num > 12)
			printf("Keep input under 13.\n");
		else
		{
			printf("loop: %d factorial = %ld\n", num, fact(num));
			printf("recursion: %d factorial = %ld\n", num, rfact(num));
		}
		printf("Enter a value in the range of 0-12 (q to quit):\n");
	}
	printf("Bye.\n");
	return 0;
}
long fact(int num)
{
	long answer = 1;
	for (; num > 1; num--)
	{
		answer *= num;
	}
	return answer;
}
long rfact(int num)
{
	long answer;
	if (num > 0)
		answer = num * rfact(num - 1);
	else
		answer = 1;
	return answer;
}