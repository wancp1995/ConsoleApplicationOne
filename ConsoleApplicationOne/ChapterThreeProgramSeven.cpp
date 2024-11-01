#include <stdio.h>
int main(void)
{
	float aboat = 3200.0;
	double abet = 2.13e9;
	long double dip = 5.32e-5;
	printf("%f can be written %e\n",aboat, aboat);
	printf("And it's %a in hexadecimal, powers of 2 notation\n",aboat);
	printf("%f can be written %e\n",abet, abet);
	printf("%f can be written %e\n",dip, dip);
	return 0;
}