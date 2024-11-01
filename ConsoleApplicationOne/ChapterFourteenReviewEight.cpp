#include <stdio.h>
#include <string.h>
struct fullname {
	char fname[20];
	char lname[20];
};
struct bard {
	struct fullname name;
	int born;
	int died;
};
struct bard willie;
struct bard* pt = &willie;
int main(void)
{
	willie = { {"Polly", "Poetics"}, 2000, 2010};
	printf("born is: %d\n", willie.born);
	printf("born is: %d\n", pt->born);

	printf("Please input born:");
	scanf_s("%d", &willie.born);
	printf("Now born is: %d\n", willie.born);

	printf("Please input born:");
	scanf_s("%d", &pt->born);
	printf("Now born is: %d\n", pt->born);

	printf("Please input lname:");
	scanf_s("%s", willie.name.lname, sizeof(willie.name.lname));
	printf("Now lname is: %s\n",willie.name.lname);

	printf("Please input lname:");
	scanf_s("%s", pt->name.lname, sizeof(pt->name.lname));
	printf("Now lname is: %s\n", pt->name.lname);

	printf("third character is :%c\n", willie.name.fname[2]);
	printf("total letters is: %d\n",(strlen(willie.name.fname) + strlen(willie.name.lname)));
	return 0;
}