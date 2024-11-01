#include <stdio.h>
int main(void)
{
	int num = 1;
	while (num < 22)
	{
		printf("%4d %6d\n", num, num * num);
		num = num + 1;
	}
	return 0;
}