#include <stdio.h>
struct house
{
	float sqft;
	int rooms;
	int stories;
	char address[40];
};
int main(void)
{
	struct house frust = { 1560.0, 6, 1, "22 Spiffo Road" };
	struct house* sign;
	sign = &frust;
	printf("%d %d\n", frust.rooms, sign->stories);
	printf("%s\n", frust.address);
	printf("%c %c\n", sign->address[3] , sign->address[4]);
	return 0;
}