#include <stdio.h>
static int count = 0;
int runcount();
int main(void)
{
	for (int i = 0; i < 100; i++)
	{
		printf("The function run %d times.\n", runcount());
	}
	return 0;
}
int runcount()
{
	return ++count;
}
