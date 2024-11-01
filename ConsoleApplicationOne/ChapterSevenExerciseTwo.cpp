#include <stdio.h>
int main(void)
{
	char ch;
	int count = 0;
	char charArray[255];
	while ((ch = getchar()) != '#')
	{
		charArray[count] = ch;
		count++;
	}
	for (int i = 0; i < count; i++)
	{
		if (i % 8 == 0)
			printf("\n");
		if (charArray[i] == '\n')
			printf("'\\n'-%d ", charArray[i]);
		else if (charArray[i] == '\t')
			printf("'\\t'-%d ",charArray[i]);
		else
			printf("%c-%d ", charArray[i],charArray[i]);
	}
	printf("\nDone!\n");
	return 0;
}