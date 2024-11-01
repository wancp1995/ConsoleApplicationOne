//#include <stdio.h>
//#define COLS 4
//int sum2d(const int ar[][COLS], int rows);
//int sum(const int ar[], int n);
//int main(void)
//{
//	int totalOne, totalTwo, totalThree;
//	int* ptOne;
//	int (*ptTwo)[COLS];
//	ptOne = (int[2]){ 10, 20 };
//	ptTwo = (int[2][COLS]){ { 1, 2, 3, -9 },{ 4, 5, 6, -8 } };
//	totalOne = sum(ptOne, 2);
//	totalTwo = sum2d(ptTwo, 2);
//	totalThree = sum((int[]) { 4, 4, 4, 5, 5, 5}, 6);
//	printf("totalOne = %d\n", totalOne);
//	printf("totalTwo = %d\n", totalTwo);
//	printf("totalThree = %d\n", totalThree);
//	return 0;
//}
//int sum(const int ar[], int n)
//{
//	int i;
//	int total = 0;
//	for (i = 0; i < n; i++)
//		total += ar[i];
//	return total;
//}
//int sum2d(const int ar[][COLS], int rows)
//{
//	int r;
//	int c;
//	int total = 0;
//	for (r = 0; r < rows; r++)
//		for (c = 0; c < COLS; c++)
//			total += ar[r][c];
//	return total;
//}