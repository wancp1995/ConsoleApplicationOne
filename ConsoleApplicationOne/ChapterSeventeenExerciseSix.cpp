#include <stdio.h>
int binarySearch(int intArray[], int arrayNum, int searchVal);
int main(void)
{
	int sortedArray[] = {1, 3, 5, 7, 9, 11, 13, 15, 17,19};
	int arrayNum = sizeof(sortedArray) / sizeof(sortedArray[0]);
	int searchVal = 7;
	if (binarySearch(sortedArray, arrayNum, searchVal))
		printf("found %d in the array.\n", searchVal);
	else
		printf("not found %d in the array.\n", searchVal);
	return 0;
}
int binarySearch(int intArray[], int arrayNum, int searchVal)
{
	int start = 0, end = arrayNum - 1;
	while (start <= end)
	{
		int searchNum = (start + end) / 2;
		if (searchVal == intArray[searchNum])
			return 1;
		if (intArray[searchNum] > searchVal)
		{
			end = searchNum - 1; 
		}
		else if (intArray[searchNum] < searchVal)
		{
			start = searchNum + 1;
		}
	}
	return 0;
}