#include <stdio.h>
int main(void)
{
	int t_ct;
	double time, power_of_2;
	int limit;
	printf("Enter the number of terms you want: ");
	scanf_s("%d", &limit);
	for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2.0)
	{
		time += 1.0 / power_of_2;
		printf("time = %f when items = %d.\n", time, t_ct);
	}
	return 0;
}