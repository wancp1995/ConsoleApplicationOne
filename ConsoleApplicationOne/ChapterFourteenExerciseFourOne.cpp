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
void printUserId(struct userId user);
int main(void)
{
	struct userId userList = { "302039823", {"Flossie", "Mike", "Dribble"} };
	printf("Test to print struct contents:\n");
	printUserId(userList);
	return 0;
}
void printUserId(struct userId user)
{
	printf("%s, ", user.name.lname);
	printf(" %s ", user.name.fname);
	if (strlen(user.name.mname) > 0)
		printf("%c. ", user.name.mname[0]);
	printf("-- %s", user.sid);
	printf("\n");
}