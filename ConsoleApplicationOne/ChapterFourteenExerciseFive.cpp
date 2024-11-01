#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct person {
	char fname[40];
	char lname[40];
};
struct student {
	struct person name;
	float grade[3];
	float average;
};
#define CSIZE 2
void setGrade(struct student list[]);
void setAverage(struct student list[]);
void printAllInfo(struct student list[]);
void printAllAverage(struct student list[]);
int main()
{
	struct student list[CSIZE];
	setGrade(list);
	setAverage(list);
	printAllInfo(list);
	printAllAverage(list);
	return 0;
}
void setGrade(struct student list[])
{
	char fname[15], lname[15];
	for (int i = 0; i < CSIZE; i++)
	{
		printf("Enter the student name(firstname lastname):");
		scanf_s("%s %s", fname, sizeof(fname), lname, sizeof(lname));
		strcpy_s(list[i].name.fname, fname);
		strcpy_s(list[i].name.lname, lname);
		printf("Enter the 3 score of %s:", fname);
		scanf_s("%f %f %f", &list[i].grade[0], &list[i].grade[1], &list[i].grade[2]);
	}
}
void setAverage(struct student list[])
{
	for (int i = 0; i < CSIZE; i++)
	{
		list[i].average = (list[i].grade[0] + list[i].grade[1] + list[i].grade[2]) / 3;
	}
}
void printAllInfo(struct student list[])
{
	for (int i = 0; i < CSIZE; i++)
	{
		printf("No.%d: %s.%s : %5.2f %5.2f %5.2f, average = %5.2f\n", i, list[i].name.fname, list[i].name.lname,
			list[i].grade[0], list[i].grade[1], list[i].grade[2], list[i].average);
	}
}
void printAllAverage(struct student list[])
{
	float sum = 0.0;
	for (int i = 0; i < CSIZE; i++)
	{
		sum += list[i].average;
	}
	printf("All average is %.2f\n", sum / CSIZE);
}