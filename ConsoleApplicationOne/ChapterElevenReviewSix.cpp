#include <stdio.h>
int main()
{
	char sign = '$';
	printf(" char sign memory: %d\n", sizeof(sign));
	printf(" '$' memory: %d\n", sizeof('$'));
	printf(" \"$\" memory: %d\n", sizeof("$"));
	return 0;
}
