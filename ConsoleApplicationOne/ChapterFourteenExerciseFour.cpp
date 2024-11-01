#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct user {
	char fname[15];
	char mname[15];
	char lname[15];
};
struct userId {
	char sid[30];
	struct user name;
};
void printUserId(struct userId list[], int num);
int main(void)
{
	struct userId userList[5] = { "302039823", {"Flossie", "Mike", "Dribble"}};
	printf("Test to print struct contents:\n");
	printUserId(userList, 5);
	return 0;
}
void printUserId(struct userId list[], int num)
{
	for (int i = 0; i < num; i++)
	{
		if (strlen(list[i].sid) < 9)
			break;
		printf("No %d: %s, ", i + 1, list[i].name.lname);
		printf(" %s ", list[i].name.fname);
		if (strlen(list[i].name.mname) > 0)
			printf("%c. ", list[i].name.mname[0]);
		printf("-- %s", list[i].sid );
		printf("\n");
	}
}