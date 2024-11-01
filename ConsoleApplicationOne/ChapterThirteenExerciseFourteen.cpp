#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROWS 20
#define COLS 30
void readData(int row, int col, int data[][COLS], FILE* fp);
void writeData(int row, int col, int data[][COLS], FILE* fp);
int data_diffusion(int row, int col, int data[][COLS], int x, int y);
static const char convert[] = { ' ',',','\'','"','^','*','%','$','@','#' };
int main(int argc, char* argv[])
{
	FILE* fin, * fout;
	int data[ROWS][COLS];
	char fileInput[] = "data.txt";
	char fileOutput[] = "graphic.txt";
	if ((fopen_s(&fin, fileInput, "r") != 0) || fin == NULL)
	{
		fprintf(stderr, "Can't open file %s.\n", fileInput);
		exit(EXIT_FAILURE);
	}
	if ((fopen_s(&fout, fileOutput, "w") != 0) || fout == NULL)
	{
		fprintf(stderr, "Can't open file %s.\n", fileOutput);
		exit(EXIT_FAILURE);
	}
	readData(ROWS, COLS, data, fin);
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			data[i][j] = data_diffusion(ROWS, COLS, data, i, j);
	writeData(ROWS, COLS, data, fout);
	fclose(fin);
	fclose(fout);
	return 0;
}
void readData(int row, int col, int data[][COLS], FILE* fp)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			fscanf_s(fp, "%d", &data[i][j]);
		}
	}
}
void writeData(int row, int col, int data[][COLS], FILE* fp)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("%c", convert[data[i][j]]);
			fprintf(fp, "%c", convert[data[i][j]]);
		}
		printf("\n");
		fprintf(fp, "\n");
	}
}
int data_diffusion(int row, int col, int data[][COLS], int x, int y)
{
	int average;
	if (x == 0)
	{
		if (y == 0)
		{
			if (abs(data[x][y] - data[x][y+1]) > 1 && abs(data[x][y] - data[x+1][y]) > 1
				&& abs(data[x][y] - data[x+1][y+1]) > 1)
				return (data[x][y] + data[x][y+1] + data[x+1][y] + data[x+1][y+1])/4;
		}
		if (y == col - 1)
		{
			if (abs(data[x][y] - data[x][y-1]) > 1 && abs(data[x][y] - data[x+1][y]) > 1
				&& abs(data[x][y] - data[x+1][y-1]) > 1)
				return (data[x][y] + data[x][y-1] + data[x+1][y] + data[x+1][y-1]) / 4;
		}
		if (abs(data[x][y] - data[x][y-1]) > 1 && abs(data[x][y] - data[x][y+1]) > 1
			&& abs(data[x][y] - data[x+1][y-1]) > 1 && abs(data[x][y] - data[x+1][y]) > 1
			&& abs(data[x][y] - data[x+1][y+1]))
			return (data[x][y] + data[x][y-1]  + data[x][y+1] + data[x+1][y-1] + data[x+1][y] + data[x+1][y+1]) / 6;
	}
	else if (x == row - 1)
	{
		if (y == 0)
		{
			if (abs(data[x][y] - data[x-1][y]) > 1 && abs(data[x][y] - data[x][y+1]) > 1
				&& abs(data[x][y] - data[x-1][y+1]) > 1)
				return (data[x][y] + data[x-1][y] + data[x][y+1] + data[x-1][y+1]) / 4;
		}
		if (y == col - 1)
		{
			if (abs(data[x][y] - data[x][y-1]) > 1 && abs(data[x][y] - data[x-1][y]) > 1
				&& abs(data[x][y] - data[x-1][y-1]) > 1)
				return (data[x][y] + data[x][y-1] + data[x-1][y] + data[x-1][y-1]) / 4;
		}
		if (abs(data[x][y] - data[x][y-1]) > 1 && abs(data[x][y] - data[x][y+1]) > 1
			&& abs(data[x][y] - data[x-1][y-1]) > 1 && abs(data[x][y] - data[x-1][y]) > 1
			&& abs(data[x][y] - data[x-1][y+1]))
			return (data[x][y] + data[x][y-1] + data[x][y+1] + data[x-1][y-1] + data[x-1][y] + data[x-1][y+1]) / 6;
	}
	if (y == 0)
	{
		if (abs(data[x][y] - data[x-1][y]) > 1 && abs(data[x][y] - data[x-1][y+1]) > 1
			&& abs(data[x][y] - data[x][y+1]) > 1 && abs(data[x][y] - data[x+1][y]) > 1
			&& abs(data[x][y] - data[x+1][y+1]))
			return (data[x][y] + data[x-1][y] + data[x-1][y+1] + data[x][y+1] + data[x+1][y] + data[x+1][y+1]) / 6;
	}
	else if (y == col - 1)
	{
		if (abs(data[x][y] - data[x-1][y]) > 1 && abs(data[x][y] - data[x-1][y-1]) > 1
			&& abs(data[x][y] - data[x][y-1]) > 1 && abs(data[x][y] - data[x+1][y]) > 1
			&& abs(data[x][y] - data[x+1][y+1]))
			return (data[x][y] + data[x-1][y] + data[x-1][y-1] + data[x][y-1] + data[x+1][y] + data[x+1][y+1]) / 6;
	}
	if (abs(data[x][y] - data[x-1][y-1]) > 1 && abs(data[x][y] - data[x-1][y]) > 1
		&& abs(data[x][y] - data[x-1][y+1]) > 1 && abs(data[x][y] - data[x][y-1]) > 1
		&& abs(data[x][y] - data[x][y+1]) > 1 && abs(data[x][y] - data[x+1][y-1]) > 1
		&& abs(data[x][y] - data[x+1][y]) > 1 && abs(data[x][y] - data[x+1][y+1]) > 1)
		return (data[x][y] + data[x-1][y-1] + data[x-1][y] + data[x-1][y+1] + data[x][y-1] + data[x][y+1]
			+data[x+1][y-1] + data[x+1][y] + data[x+1][y+1]) / 9;

	return data[x][y];
}