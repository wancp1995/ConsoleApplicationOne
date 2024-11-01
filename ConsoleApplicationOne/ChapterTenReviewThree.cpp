#include <stdio.h>
int main(void)
{
	int ref[] = { 8, 4, 0, 2 };
	printf("%d\n", *ref);
	printf("%d\n", *(ref + 1));
	//++ref;
	return 0;
}