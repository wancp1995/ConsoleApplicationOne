#include <stdio.h>
#include <string.h>
int main(void)
{
	char firstName[40], lastName[40];
	printf("Enter yout firstName:");
	scanf_s("%s",firstName,sizeof(firstName));
	printf("Enter your lastName:");
	scanf_s("%s",lastName,sizeof(lastName));
	printf("%s %s\n",firstName,lastName);
	printf("%*d %*d\n",strlen(firstName),strlen(firstName),strlen(lastName),strlen(lastName));
	printf("%s %s\n", firstName, lastName);
	printf("%d %*d\n",strlen(firstName),strlen(firstName),strlen(lastName));
	return 0;
}