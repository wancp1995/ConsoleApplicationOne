#include <stdio.h>
int main(void)
{
	char ch;
	int lc = 0; // lower char count
	int uc = 0; // upper char count
	int oc = 0; // other char count
	while ((ch = getchar()) != '#')
	{
		if (ch >= 'a' && ch <= 'z')
			lc++;
		else if (ch >= 'A' && ch <= 'Z')
			uc++;
		else
			oc++;
	}
	printf("%d lowercase, %d uppercase, %d other", lc, uc, oc);
	return 0;
}