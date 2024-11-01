#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROWS 20
#define COLS 30
void readData(int row, int col, int data[][COLS], FILE *fp);
void writeData(int row, int col, int data[][COLS], FILE *fp);
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