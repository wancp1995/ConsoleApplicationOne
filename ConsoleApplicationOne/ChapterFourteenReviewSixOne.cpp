#include <stdio.h>
#include <string.h>
typedef struct lens {
	float foclen;
	float fstop;
	char brand[30];
} LENS;
int main()
{
	LENS lensArray[10];
	lensArray[2] = { 2.0, 500, "Remarkata"};
	printf("fstop: %.2f, foclen: %.2f, brand: %s\n", lensArray[2].fstop, lensArray[2].foclen, lensArray[2].brand);
}
