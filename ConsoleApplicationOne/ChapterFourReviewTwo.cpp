#include <stdio.h>
#include <string.h>
#define Q "His Hamlet was funny without being vulgar."
int main(void)
{
	printf("result a:\n");
	printf("He sold the painting for $%2.2f. \n", 2.345e2);
	printf("result b:\n");
	printf("%c%c%c\n", 'H', 105, '\41');
	printf("result c:\n");
	printf("%s\n has %d characters.\n", Q, strlen(Q));
	printf("result d:\n");
	printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);
	return 0;
}