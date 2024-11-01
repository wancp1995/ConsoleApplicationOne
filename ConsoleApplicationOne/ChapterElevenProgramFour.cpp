#include <stdio.h>
#define SLEM 40
#define LIM 5
int main(void)
{
	const char* mytalents[LIM] = {
		"Adding numbers swiftly",
		"Multiplying accurately", "Stashing data",
		"Following instructions to the letter",
		"Understanding the C language"
	};
	char youralents[LIM][SLEM] = {
		"Walking in a straight line",
		"Sleeping", "Watching television",
		"Mailing letters", "Reading email"
	};
	int i;
	puts("Let's compare talents.");
	printf("%-36s	%-25s\n", "My Talents", "Your Talents");
	for (i = 0; i < LIM; i++)
		printf("%-36s	%-25s\n", mytalents[i], youralents[i]);
	printf("\nsizeof mytalents: %zd, sizeof youttalents: %zd\n", sizeof(mytalents), sizeof(youralents));
	return 0;
}