#include <stdio.h>
void smile();
int main(void)
{
	smile(); smile(); smile();
	printf("\n");
	smile(); smile();
	printf("\n");
	smile();
	printf("\n");
	return 0;
}
void smile()
{
	printf("Smile!");
}