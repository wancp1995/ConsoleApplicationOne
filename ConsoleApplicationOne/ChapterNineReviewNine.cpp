#include <stdio.h>
void showMenu();
int getChoice(int low, int high);
int main(void)
{
	int choice;
	showMenu();
	while ((choice = getChoice(1, 4)) != 4)
	{
		printf("I like choice %d.\n", choice);
		showMenu();
	}
	printf("Bye.\n");
	return 0;
}
void showMenu()
{
	printf("Please enter one of the following:\n");
	printf("1) copy files			2) move files\n");
	printf("3) remove files			4) quit\n");
	printf("Enter the number of your choice:\n");
}
int getChoice(int low, int high)
{
	int choice;
	int flag = scanf_s("%d", &choice);
	while ((flag == 1) && (choice < low || choice > high))
	{
		printf("%d is not a vaild choice: try again\n", choice);
		showMenu();
		flag = scanf_s("%d", &choice);
	}
	if (flag != 1)
	{
		printf("Non-numeric inpput. ");
		choice = 4;
	}
	return choice;
}