#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "queueone.h"
#define MIN_PER_HR 60.0
bool newcustomer(double x);
Item customertime(long when);
struct{
	Queue line;
	int hours, perhour, wait_time;
	long cycle, cyclelimit, turnaways;
	long customers, served, sum_line, line_wait;
	double min_per_cust;
}Booth_line[2];
int main(void)
{
	Item temp;
	InitializeQueue(&Booth_line[0].line);
	InitializeQueue(&Booth_line[1].line);
	srand((unsigned int)time(0));
	puts("Case Study: Sigmund Lander's Advice Booth");
	puts("Enter the number of simulation hours for queue1:");
	scanf_s("%d", &Booth_line[0].hours);
	Booth_line[0].cyclelimit = MIN_PER_HR * Booth_line[0].hours;

	puts("Enter the number of simulation hours for queue2:");
	scanf_s("%d", &Booth_line[1].hours);
	Booth_line[1].cyclelimit = MIN_PER_HR * Booth_line[1].hours;


	puts("Enter the average number od customers per hour for queue1:");
	scanf_s("%d", &Booth_line[0].perhour);
	Booth_line[0].min_per_cust = MIN_PER_HR / Booth_line[0].perhour;

	puts("Enter the average number od customers per hour for queue2:");
	scanf_s("%d", &Booth_line[1].perhour);
	Booth_line[1].min_per_cust = MIN_PER_HR / Booth_line[1].perhour;

	for (int i = 0; i < 2; i++)
	{
		for (Booth_line[i].cycle = 0; Booth_line[i].cycle < Booth_line[i].cyclelimit; Booth_line[i].cycle++)
		{
			if (newcustomer(Booth_line[i].min_per_cust))
			{
				if (QueueIsFull(&Booth_line[i].line))
				{
					Booth_line[i].turnaways++;
				}
				else
				{
					Booth_line[i].customers++;
					temp = customertime(Booth_line[i].cycle);
					EnQueue(temp, &Booth_line[i].line);
				}
			}
			if (Booth_line[i].wait_time <= 0 && !QueueIsEmpty(&Booth_line[i].line))
			{
				DeQueue(&temp, &Booth_line[i].line);
				Booth_line[i].wait_time = temp.processtime;
				Booth_line[i].line_wait += Booth_line[i].cycle - temp.arrive;
				Booth_line[i].served++;
			}
			if (Booth_line[i].wait_time > 0)
				Booth_line[i].wait_time--;
			Booth_line[i].sum_line += QueueItemCount(&Booth_line[i].line);
		}
		if (Booth_line[i].customers > 0)
		{
			printf("customers accpted for queue%d: %ld\n", i+1, Booth_line[i].customers);
			printf("customers served for queue%d: %ld\n", i+1, Booth_line[i].served);
			printf("turnaways for queue%d: %ld\n", i+1, Booth_line[i].turnaways);
			printf("average queuq size for queue%d: %.2f\n", i+1, (double)Booth_line[i].sum_line / Booth_line[i].cyclelimit);
			printf("average wait time: %.2f minutes for queue%d\n", i+1, (double)Booth_line[i].line_wait / Booth_line[i].served);
		}
		else
			printf("No customers for queue%d!\n", i+1);
		EmptyTheQueue(&Booth_line[i].line);
	}
	puts("Bye!");
	return 0;
}
bool newcustomer(double x)
{
	if (rand() * x / RAND_MAX < 1)
		return true;
	else
		return false;
}
Item customertime(long when)
{
	Item cust;
	cust.processtime = rand() % 3 + 1;
	cust.arrive = when;
	return cust;
}