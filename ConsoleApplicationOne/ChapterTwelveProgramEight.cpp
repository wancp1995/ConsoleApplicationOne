#include <stdio.h>
extern unsigned int randZero(void);
int main(void)
{
	int count;
	for (count = 0; count < 5; count++)
		printf("%d\n", randZero());
	return 0;
}