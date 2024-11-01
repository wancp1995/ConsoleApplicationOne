#include <stdio.h>
#define B "booboo"
#define X 10
int main(void)
{
	int age;
	char name[40];
	printf("Please enter your first name.");
	scanf_s("%s", name, sizeof(name));
	printf("All right, %s, what's your age?\n", name);
	scanf_s("%d", &age);
	int xp = age + X;
	printf("That's a %s! You must be at least %d.\n", B, xp);
	return 0;
} 