#include <stdio.h>
#define BASE_SALARY 10.00
#define EXTRA_HOUR 1.5
#define BASE_TAX 0.15
#define EXTRA_TAX 0.2
#define EXCEED_TAX 0.25

void showMenu();
void calcSalary(float baseSalary,float hours);
void clear_input_buffer();


int main(void)
{
	float hours = 0;
	char ch;
	do
	{
		showMenu();
		scanf_s("%c", &ch);
		switch (ch)
		{
		case '1':
			printf("You select $8.75/hr. Enter the work hours:");
			scanf_s("%f", &hours);
			calcSalary(8.75, hours);
			clear_input_buffer();
			break;
		case '2':
			printf("You select $9.33/hr. Enter the work hours:");
			scanf_s("%f", &hours);
			calcSalary(9.33, hours);
			clear_input_buffer();
			break;
		case '3':
			printf("You select $10.00/hr. Enter the work hours:");
			scanf_s("%f", &hours);
			calcSalary(10.00, hours);
			clear_input_buffer();
			break;
		case '4':
			printf("You select $11.33/hr. Enter the work hours:");
			scanf_s("%f", &hours);
			calcSalary(11.33, hours);
			clear_input_buffer();
		case '5':
			clear_input_buffer();
			break;
		default:
			printf("Error selected! please try again!");
			scanf_s("%c", &ch);
			break;
		}
	} while (ch != '5');
	printf("Done!\n");
	return 0;
}
void clear_input_buffer()
{
	char ch;
	while ((ch = getchar()) != '\n' && ch != EOF);
}

void showMenu()
{
	char sOne[] = "1) $8,75/hr";
	char sTwo[] = "2) $9.33/hr";
	char sThree[] = "3) $10.00/hr";
	char sFour[] = "4) $11.20/hr";
	char sFive[] = "5) quit";
	printf("\n***********************************************\n");
	printf("%-40s", sOne);
	printf("%-40s\n", sTwo);
	printf("%-40s", sThree);
	printf("%-40s\n", sFour);
	printf("%-40s", sFive);
	printf("\n***********************************************\n");

}

void calcSalary(float baseSalary, float hours)
{
	float salary, tax, taxed_salary;
	if (hours <= 30)
	{
		salary = hours * baseSalary;
		tax = salary * BASE_TAX;
		taxed_salary = salary - tax;
	}
	else if (hours <= 40)
	{
		salary = hours * baseSalary;
		tax = 300 * BASE_TAX + (salary - 300) * EXCEED_TAX;
		taxed_salary = salary - tax;
	}
	else
	{
		salary = (40 + (hours - 40) * EXTRA_HOUR) * baseSalary;
		if (salary <= 450)
			tax = 300 * BASE_TAX + (salary - 300) * EXTRA_TAX;
		else
			tax = 300 * BASE_TAX + 150 * EXTRA_TAX + (salary - 450) * EXCEED_TAX;
		taxed_salary = salary - tax;
	}
	printf("Your salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\n", salary, tax, taxed_salary);
}

