#include <stdio.h>
#define EVEN_GT(X, Y) (((X) % 2 == 0) && ((X) > (Y))) ? 1 : 0
int main(void)
{
	int x = 6, y = 3;
	printf("EVEN_GT(%d,%d) is %d ", x, y, EVEN_GT(x, y));
	return 0;
}