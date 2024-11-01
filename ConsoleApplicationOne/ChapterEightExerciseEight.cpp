#include <stdio.h>
void showMenu();
float getFloatNumber();
int main(void)
{
	char operate;
	float firstNumber, secondNumber;
	do 
	{
		showMenu();
		operate = getchar();
		while (getchar() != '\n') continue;
		switch (operate)
		{
		case 'a':
			printf("Enter first number: ");
			firstNumber = getFloatNumber();
			printf("Enter second number: ");
			secondNumber = getFloatNumber();
			printf("%g + %g = %g \n", firstNumber, secondNumber, firstNumber + secondNumber);
			break;
		case 's':
			printf("Enter first number: ");
			firstNumber = getFloatNumber();
			printf("Enter second number: ");
			secondNumber = getFloatNumber();
			printf("%g - %g = %g \n", firstNumber, secondNumber, firstNumber - secondNumber);
			break;
		case 'm':
			printf("Enter first number: ");
			firstNumber = getFloatNumber();
			printf("Enter second number: ");
			secondNumber = getFloatNumber();
			printf("%g * %g = %g \n", firstNumber, secondNumber, firstNumber * secondNumber); 
			break;
		case 'd':
			printf("Enter first number: ");
			firstNumber = getFloatNumber();
			printf("Enter second number: ");
			while ((secondNumber = getFloatNumber()) == 0)
				printf("Enter a number other than 0: ");
			printf("%g / %g = %g \n", firstNumber, secondNumber, firstNumber / secondNumber);
			break;
		case 'q':
			break;
		default:
			printf("Please enter a char, such as a, s, m, d and q:\n");
			while (getchar() != '\n');
			break;
		}
		while (getchar() != '\n');
	} while (operate != 'q');
	printf("Bye.\n");
	return 0;
}
void showMenu()
{
	printf("Enter the operation of your choice:\n");
	printf("a. add					s. subtract\n");
	printf("m. multiply				d. divide\n");
	printf("q. quit \n");
}
float getFloatNumber()
{
	float number;
	char ch;
	while (scanf_s("%g", &number) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an number.\n");
		printf("Please enter a number, such as 2.5, -1, 78E8, or 3: ");
	}
	return number;
}
