#include <stdio.h>
#include <string.h>
#include <math.h>
int binaryToDecimal(const char* binary);
int main()
{
	char binary[33];
	printf("Enter a binary number:");
	while (scanf_s("%s", binary, sizeof(binary)) == 1 && binary[0] != 'q')
	{
		int decimal = binaryToDecimal(binary);
		printf("Decimal: %d\n", decimal);
		printf("Enter a binary number:");
	}
	return 0;
}
int binaryToDecimal(const char* binary)
{
	int decimal = 0;
	int length = strlen(binary);
	for (int i = 0; i < length; i++)
	{
		if (binary[i] == '1')
		{
			decimal += pow(2, length - 1 - i);
		}
	}
	return decimal;
}
