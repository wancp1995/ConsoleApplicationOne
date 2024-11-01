#include <stdio.h>
#include "pe12-3a.h"
int main(void)
{
	int mode;
	double distance, fuel;
	int n;
	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf_s("%d", &n);
	while (n >= 0)
	{
		set_mode(&mode, n);
		get_info(mode,&distance, &fuel);
		show_info(mode, distance, fuel);
		printf("Enter 0 for metric mode, 1 for US mode");
		printf(" (-1 to quit): ");
		scanf_s("%d", &n);
	}
	printf("Done!\n");
	return 0;
}
void set_mode(int* mode, int n)
{
	if (n > 1)
	{
		printf("Invalid mode.");
		if (mode == 0)
		{
			printf("Mode 0(Metic) used.\n");
		}
		else
		{
			printf("Mode 1(US) used.\n");
		}
	}
	else
		*mode = n;
}
void get_info(int mode, double* distance, double* fuel)
{
	if (mode == 0)
		printf("Enter the distance traveled in kilometer:");
	else
		printf("Enter the diatance traveled in miles:");
	scanf_s("%lf", distance);
	if (mode == 0)
		printf("Enter fuel consumed in liters:");
	else
		printf("Enter fuek consumed in gallons:");
	scanf_s("%lf", fuel);
}
void show_info(int mode, double distance, double fuel)
{
	if (mode == 0)
		printf("Fuel cunsuption is %.2lf liters per 100 km.\n", (fuel / distance) * 100);
	else
		printf("Fuel consuption is %.1lf miles per gallon.\n", distance / fuel);
}