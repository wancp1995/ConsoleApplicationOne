#include <stdio.h>
int maxValueInArray(int array[], int n);
int main()
{
	int array[5] = { 1, 2, 3, 4, 5 };
	printf("The largest number in array is: %d\n", maxValueInArray(array, 5));
	return 0;
}
int maxValueInArray(int array[], int n)
{
	int i, max = array[0];
	for (i = 1; i < n; i++)
	{
		if (max < array[i])
			max = array[i];
	}
	return max;
}