#include <stdio.h>
int main(void)
{
	char firstName[40];
	char lastName[40];
	printf("Enter your firstName:");
	scanf_s("%s",firstName,sizeof(firstName));
	printf("Enter your lastName:");
	scanf_s("%s",lastName,sizeof(lastName));
	printf("Your fullName is: %s,%s\n",firstName,lastName);
	return 0;
}