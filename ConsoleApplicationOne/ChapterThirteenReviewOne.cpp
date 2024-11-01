#include <stdio.h>
int main(void)
{
	FILE* fp;
	int k;
	fopen_s(&fp, "gelatin", "w");
	for (k = 0; k < 30; k++)
		fputs("Nanette eats gelatin.\n",fp);
	fclose(fp);
	int ch;
	fopen_s(&fp, "gelatin", "r");
	while ((ch = getc(fp)) != EOF)
		putc(ch ,stdout);
	fclose(fp);
	return 0;
}