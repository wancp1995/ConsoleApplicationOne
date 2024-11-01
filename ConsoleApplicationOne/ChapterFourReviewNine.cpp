#include <stdio.h>
int main(void)
{
	int a;
	float bOne, bTwo;
	char c[40];
	char dOne[40];
	int dTwo;
	char eOne[40];
	int eTwo;
	scanf_s("%d", &a);
	printf("a: %d\n",a);
	scanf_s("%f %f", &bOne, &bTwo);
	printf("b: %e %e\n", bOne, bTwo);
	scanf_s("%s", c, sizeof(c));
	printf("c: %s\n",c);
	scanf_s("%s %d", dOne, sizeof(dOne), &dTwo );
	printf("d: %s %d\n", dOne, dTwo);
	scanf_s("%*s %d", &eTwo);
	printf("e: %d\n", eTwo);
	return 0;
}