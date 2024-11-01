#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 40
#define NUMBER 5
void showMenu(void);
char* s_gets(char* st, int n);
void inputString(int number, char str[][SIZE]);
void printOriginal(int number, char str[][SIZE]);
void printAscii(int number, char str[][SIZE]);
void sortOrder(int number, int order[][2]);
void printLength(int number, char str[][SIZE]);
void printWords(int number, char str[][SIZE]);
int getWordLength(char* input);
int main(void)
{
	char str[NUMBER][SIZE];
	int selected;
	inputString(NUMBER, str);
	showMenu();
	scanf_s("%d", &selected);
	while (selected != 5)
	{
		switch (selected)
		{
		case 1:
			printOriginal(NUMBER, str);
			break;
		case 2:
			printAscii(NUMBER, str);
			break;
		case 3:
			printLength(NUMBER, str);
			break;
		case 4:
			printWords(NUMBER, str);
			break;
		case 5:
			break;
		default:
			printf("Error select, try again!\n");
			break;
		}
		showMenu();
		scanf_s("%d", &selected);
	}
	printf("Done!\n");
	return 0;
}
void showMenu(void)
{
	printf("=====================================================================\n");
	printf("1) print original strings.			2) print string by ascii order\n");
	printf("3) printf string by lenth.			4) print string by word length\n");
	printf("5) quit.\n");
	printf("=====================================================================\n");
}
void inputString(int number, char str[][SIZE])
{
	printf("Please input 5 strings seperate by enter.\n");
	for (int i = 0; i < number; i++)
	{
		s_gets(str[i], SIZE);
	}
}
void printOriginal(int number, char str[][SIZE])
{
	printf("print 5 strings in orignal mode.\n");
	for (int i = 0; i < number; i++)
	{
		printf("%d %s\n", i, str[i]);
	}
}
void printAscii(int number, char str[][SIZE])
{
	printf("print 5 strings in ascii mode.\n");
	int order[NUMBER][2];
	for (int i = 0; i < number; i++)
	{
		order[i][0] = i;
		order[i][1] = str[i][0];
	}
	sortOrder(number, order);
	for (int i = 0; i < number; i++)
	{
		printf("ASCII No.%d . %s\n", i, str[order[i][0]]);
	}
}
void printLength(int number, char str[][SIZE])
{
	printf("print 5 strings in length mode.\n");
	int order[NUMBER][2];
	for (int i = 0; i < number; i++)
	{
		order[i][0] = i;
		order[i][1] = strlen(str[i]);
	}
	sortOrder(number, order);
	for (int i = 0; i < number; i++)
	{
		printf("ASCII No.%d . %s\n", i, str[order[i][0]]);
	}
}
void printWords(int number, char str[][SIZE])
{
	printf("print 5 strings in words modes.\n");
	int order[NUMBER][2];
	for (int i = 0; i < number; i++)
	{
		order[i][0] = i;
		order[i][1] = getWordLength(str[i]);
	}
	sortOrder(number, order);
	for (int i = 0; i < number; i++)
	{
		printf("ASCII No.%d . %s\n", i, str[order[i][0]]);
	}
}
int getWordLength(char *input)
{
	char* in = input;
	int length = 0;
	while (isalpha(*in) == 0) in++;
	while (isalpha(*in) != 0)
	{
		length++;
		in++;
	}
	return length;
}
void sortOrder(int number, int order[][2])
{
	int temp[2];
	for (int i = 0; i < number - 1; i++)
	{
		for (int j = 0; j < number -i - 1; j++)
		{
			if (order[j][1] > order[j+1][1])
			{
				temp[0] = order[j][0];
				temp[1] = order[j][1];
				order[j][0] = order[j + 1][0];
				order[j][1] = order[j + 1][1];
				order[j + 1][0] = temp[0];
				order[j + 1][1] = temp[1];
			}
		}
	}
}
char* s_gets(char* st, int n)
{
	char* ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}