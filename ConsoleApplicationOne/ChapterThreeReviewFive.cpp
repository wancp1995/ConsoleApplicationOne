#include <stdio.h>
int main(void)
{
	float g, h;
	float tax, rate;
	rate = 0.08;
	g = 1e21; 
	tax = rate * g;
	h = g + tax;
	printf("You owe $%f plus $%f in taxes for a total of $%f.\n",g,tax,h);
	return 0;
}