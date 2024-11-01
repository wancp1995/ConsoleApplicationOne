#include <stdio.h>
#define SINGLE 17850
#define HOLDER 29750
#define MARRY 29750
#define DIVORCE 14875
#define BASE_TAX 0.15
#define EXTRA_TAX 0.28
void showMenu();
void clear_input_buffer();
void calcSalary(char type);
int main(void)
{
	char type;
	do
	{
		showMenu();
		printf("Please choose your type:");
		scanf_s("%c", &type);
		clear_input_buffer();
		calcSalary(type);
	} while (type != '5');
	printf("Done!\n");
	return 0;
}
void showMenu()
{
	printf("Please select tax type. There are four type:\n");
	printf("1)Single		2)House Holder		3)Married		4)Disvorced		5)Quit\n");
}
void clear_input_buffer()
{
	char ch;
	while ((ch = getchar()) != '\n' && ch != EOF);
}
void calcSalary(char type)
{
	float  salary, tax, taxedSalary;
	switch (type)
	{
	case '1':
		printf("Enter your salary:");
		scanf_s("%f", &salary);
		clear_input_buffer();
		if (salary <= SINGLE)
		{
			tax = salary * BASE_TAX;
			taxedSalary = salary - tax;
		}
		else
		{
			tax = SINGLE * BASE_TAX + (salary - SINGLE) * EXTRA_TAX;
			taxedSalary = salary - tax;
		}
		printf("Your salary is %.2f, tax is %.2f, after tax salary is %.2f\n", salary, tax, taxedSalary);
		break;
	case '2':
		printf("Enter your salary:");
		scanf_s("%f", &salary);
		clear_input_buffer();
		if (salary <= HOLDER)
		{
			tax = salary * BASE_TAX;
			taxedSalary = salary - tax;
		}
		else
		{
			tax = HOLDER * BASE_TAX + (salary - HOLDER) * EXTRA_TAX;
			taxedSalary = salary - tax;
		}
		printf("Your salary is %.2f, tax is %.2f, after tax salary is %.2f\n", salary, tax, taxedSalary);
		break;
	case '3':
		printf("Enter your salary:");
		scanf_s("%f", &salary);
		clear_input_buffer();
		if (salary <= MARRY)
		{
			tax = salary * BASE_TAX;
			taxedSalary = salary - tax;
		}
		else
		{
			tax = MARRY * BASE_TAX + (salary - MARRY) * EXTRA_TAX;
			taxedSalary = salary - tax;
		}
		printf("Your salary is %.2f, tax is %.2f, after tax salary is %.2f\n", salary, tax, taxedSalary);
		break;
	case '4':
		printf("Enter your salary:");
		scanf_s("%f", &salary);
		clear_input_buffer();
		if (salary <= DIVORCE)
		{
			tax = salary * BASE_TAX;
			taxedSalary = salary - tax;
		}
		else
		{
			tax = DIVORCE * BASE_TAX + (salary - DIVORCE) * EXTRA_TAX;
			taxedSalary = salary - tax;
		}
		printf("Your salary is %.2f, tax is %.2f, after tax salary is %.2f\n", salary, tax, taxedSalary);
		break;
	case '5':
		break;
	default:
		printf("Wrong type. Please retry.\n");
		break;
	}
	
}
