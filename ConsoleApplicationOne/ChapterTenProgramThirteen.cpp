#include <stdio.h>
int main(void)
{
	int urn[5] = { 100, 200, 300, 400, 500 };
	int* ptrOne, * ptrTwo, * ptrThree;
	ptrOne = urn;
	ptrTwo = &urn[2];
	printf("pointer value, dereferenced pointer, point address:\n");
	printf("ptrOne = %p, *ptrOne = %d, &ptrOne = %p\n", ptrOne, *ptrOne, &ptrOne);
	ptrThree = ptrOne + 4;
	printf("\n adding an int to a pointer:\n");
	printf("ptrOne + 4 = %p, *(ptrOne + 4) = %d\n", ptrOne + 4, *(ptrOne + 4));
	ptrOne++;
	printf("\nvalues after ptrOne++:\n");
	printf("ptrOne = %p, *ptrOne = %d, &ptrOne = %p\n", ptrOne, *ptrOne, &ptrOne);
	ptrTwo--;
	printf("\nvalues after --ptrTwo:\n");
	printf("ptrTwo = %p, *ptrTwo = %d, &ptrTwo = %p\n", ptrTwo, *ptrTwo, &ptrTwo);
	--ptrOne;
	++ptrTwo;
	printf("\nPointers reset to original value:\n");
	printf("ptrOne = %p, ptrTwo = %p\n", ptrOne, ptrTwo);
	printf("\nsubstracting one pointer from another:\n");
	printf("ptrTwo = %p, ptrOne = %p, ptrTwo - ptrOne = %td\n", ptrTwo, ptrOne, ptrTwo - ptrOne);
	printf("\nsubstracting an int from a pointer:\n");
	printf("ptrThree = %p, ptrThree - 2 = %p", ptrThree, ptrThree - 2);
	return 0;
}