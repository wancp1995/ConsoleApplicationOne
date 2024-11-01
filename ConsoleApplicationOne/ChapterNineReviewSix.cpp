#include <stdio.h>
void alter(int *a, int *b);
int main(void)
{
	int a = 3, b = 5;
	printf("Original a = %d, b = %d\n", a, b);
	alter(&a, &b);
	printf("Now a = %d, b = %d\n", a, b);
	return 0;
}
void alter(int* a, int* b) 
{
	int temp;
	temp = *a + *b;
	*b = *a - *b;
	*a = temp;
}