#include <stdio.h>
int main(void)
{
	float inchHeight, cmHeight;
	char name[40];
	printf("Enter your height(inch):");
	scanf_s("%f", &inchHeight);
	printf("Enter your height(cm):");
	scanf_s("%f", &cmHeight);
	printf("Enter your name:");
	scanf_s("%s",name,sizeof(name));
	printf("%s, you are %.3f feet tall\n",name,inchHeight);
	printf("%s, you are %.3e m tall\n",name,cmHeight/100);
	return 0;
}