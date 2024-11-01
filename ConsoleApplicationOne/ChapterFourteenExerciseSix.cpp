#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct  {
	int id;
	char fname[20];
	char lname[20];
	int startNum;
	int hitNum;
	int baseNum;
	int RBI;
	float BABIP;
} PLAYER;
void readData(PLAYER players[], FILE* fp);
void setBabip(PLAYER players[]);
void printInfo(PLAYER players[]);
int main(void)
{
	PLAYER players[19] = {};
	FILE* fp;
	if ((fopen_s(&fp, "dataOne.txt", "r") != 0) || fp == NULL)
	{
		fprintf(stderr, "Can't open %s\n", "dataOne.txt");
		exit(EXIT_FAILURE);
	}
	readData(players, fp);
	setBabip(players);
	printInfo(players);
	fclose(fp);
	return 0;
}
void readData(PLAYER players[], FILE* fp)
{
	if (fp == NULL)
	{
		printf("Can not open the file.\n");
		exit(EXIT_FAILURE);
	}
	int id, startNum, hitNum, baseNum, RBI;
	float BABIP;
	char fname[20], lname[20];
	int readCount = 1;
	while (1)
	{
		readCount = fscanf_s(fp, "%d %s %s %d %d %d %d", &id, fname, sizeof(fname), lname, sizeof(lname), &startNum, 
			&hitNum, &baseNum, &RBI);
		if (readCount < 7)
			break;
		strcpy_s(players[id].fname, fname);
		strcpy_s(players[id].lname, lname);
		players[id].id = id;
		players[id].startNum += startNum;
		players[id].hitNum += hitNum;
		players[id].baseNum += baseNum;
		players[id].RBI += RBI;
	}
}
void setBabip(PLAYER players[])
{
	for (int i = 0; i < 19; i++)
	{
		if (players[i].hitNum != 0 && players[i].startNum != 0)
		{
			players[i].BABIP = (float)players[i].hitNum / (float)players[i].startNum;
		}
	}
}
void printInfo(PLAYER players[])
{
	printf("ID: FIRST_NAME.LAST_NAME START HIT_NUM BASE_NUM RBI BABAIP\n");
	for (int i = 0; i < 19; i++)
	{
		printf("%2d %10s.%-10s %5d %5d %7d %6d %.2f\n", players[i].id, players[i].fname, players[i].lname,players[i].startNum,
			players[i].hitNum, players[i].baseNum, players[i].RBI, players[i].BABIP);
	}
}