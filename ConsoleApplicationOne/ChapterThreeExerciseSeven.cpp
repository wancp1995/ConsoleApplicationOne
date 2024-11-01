#include <stdio.h>
#define CM_PER_INCH 2.54
int main(void)
{
	float inchHeight,cmHeight;
	printf("Please input yoour height(inch): ");
	scanf_s("%f",&inchHeight);
	cmHeight = inchHeight * CM_PER_INCH;
	printf("Your height(inch): %.2f, equals height(cm): %.2f\n",inchHeight, cmHeight);
	return 0;
}