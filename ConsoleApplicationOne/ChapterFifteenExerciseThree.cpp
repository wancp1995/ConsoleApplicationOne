#include <stdio.h>
#include <stdlib.h>
int countSetBits(int num);
int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <number>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	int number = atoi(argv[1]);
	printf("%d has %d bit sets.\n", number, countSetBits(number));
}
int countSetBits(int num)
{
	int count = 0;
	while (num)
	{
		if (num & 1)
			count++;
		num >>= 1;
	}
	return count;
}