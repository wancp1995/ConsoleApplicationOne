#include <stdio.h>
#include <string.h>
#include <math.h>
int binaryToDecimal(const char* binary);
char* decimalToBinary(int n, char* binStr, int size);
int main(int argc, char* argv[])
{
	char result[33];
	char binStrOne[33], binStrTwo[33];
	int numOne, numTwo;
	if (argc != 3)
	{
		printf("Please input two binary number string:");
		scanf_s("%s %s", binStrOne, sizeof(binStrOne), binStrTwo, sizeof(binStrTwo));
	}
	else
	{
		strncpy_s(binStrOne, argv[1], 32);
		strncpy_s(binStrTwo, argv[2], 32);
	}
	numOne = binaryToDecimal(binStrOne);
	numTwo = binaryToDecimal(binStrTwo);
	decimalToBinary(~numOne, result, 33);
	printf("%s  ~binStrOne = %s\n", binStrOne, result);
	decimalToBinary(~numTwo, result, 33);
	printf("%s  ~binStrTwo = %s\n", binStrTwo, result);
	decimalToBinary(numOne & numTwo, result, 33);
	printf("%s & %s = %s\n", binStrOne, binStrTwo, result);
	decimalToBinary(numOne | numTwo, result, 33);
	printf("%s | %s = %s\n", binStrOne, binStrTwo, result);
	decimalToBinary(numOne ^ numTwo, result, 33);
	printf("%s ^ %s = %s\n", binStrOne, binStrTwo, result);
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
char* decimalToBinary(int n, char* binStr, int size)
{
	binStr[size - 1] = '\0';
	for (int i = size -2; i >= 0; i--)
	{
		binStr[i] = (n & 01) + '0';
		n >>= 1;
	}
	return binStr;

}
