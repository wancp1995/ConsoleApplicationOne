#include <stdio.h>
int data[2] = { 100, 200 };
int moredata[2] = { 300, 400 };
int main(void)
{
	int * pOne, * pTwo, * pThree;
	pOne = pTwo = data;
	pThree = moredata;
	printf("*pOne = %d,	*pTwo = %d, *pThree = %d\n", *pOne, *pTwo, *pThree);
	printf("*pOne++ = %d, *++pTwp = %d, *(pThree)++ = %d\n", *pOne++, *++pTwo, (*pThree)++);
	printf("*pOne = %d, *pTwo = %d, *pThree = %d\n", *pOne, *pTwo, *pThree);
	return 0;
}