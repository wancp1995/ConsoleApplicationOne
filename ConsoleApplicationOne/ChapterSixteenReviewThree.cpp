#include <stdio.h>
#define MIN(x, y) ((x < y) ? (x) : (y))
int main(void)
{
	int x = 5, y = 3;
	printf("min(%d,%d) is %d ", x, y , MIN(x, y));
	return 0;
}