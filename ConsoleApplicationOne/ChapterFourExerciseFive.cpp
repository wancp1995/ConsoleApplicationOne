#include <stdio.h>
int main(void)
{
	float speed, size, time;
	printf("Enter net speed(megabits per second):");
	scanf_s("%f",&speed);
	printf("Enter file size(megabytes):");
	scanf_s("%f",&size);
	time = size * 8 / speed;
	printf("At %.2f megabits per second, a file of %.2f megabytes\n",speed,size);
	printf("downloads in %.2f seconds.\n",time);
	return 0;
}