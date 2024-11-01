#include <stdio.h>
#define PR(X, Y) printf(#X " is %d and " #Y " is %d\n", X ,Y);
int main(void)
{
	PR(3+4, 4*12);
	return 0;
}