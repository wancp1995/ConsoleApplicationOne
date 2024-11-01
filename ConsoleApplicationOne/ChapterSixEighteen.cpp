#include <stdio.h>
int main(void)
{
	const int dunbarNumber = 150;
	int rabnud = 5;
	int weeks = 1;
	while (rabnud < dunbarNumber)
	{
		printf("At %d weeks, rabnud has %d friends.\n", weeks, rabnud);
		rabnud = (rabnud - weeks) * 2;
		weeks++;
	}
	printf("After week %d, Rebnud has more than %d friends.\n", weeks, dunbarNumber);
	return 0;
}