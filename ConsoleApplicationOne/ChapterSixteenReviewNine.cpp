#include <stdio.h>
#define PRDATE
int main(void)
{
#ifdef PRDATE
	printf("Date is %s\n", __DATE__);
#endif // PRDATE
	return 0;
}