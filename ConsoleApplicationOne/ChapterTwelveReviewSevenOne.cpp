#include <stdio.h>
int daisy = 1;
int pental();
int main(void)
{
	pental();
	int lily;
	return 0;
}
int pental()
{
	extern int daisy, lily;
	printf("daisy = %d\n",daisy);
	return 0;
}