#include <stdio.h>
int main(void)
{
	char strOne[] = "gawsie";
	char strTwo[] = "bletonism";
	char* ps;
	int i = 0;
	for (ps = strOne; *ps != '\0'; ps++)
	{
		if (*ps == 'a' || *ps == 'e')
			putchar(*ps);
		else
			(*ps)--;
		putchar(*ps);
	}
	putchar('\n');
	while (strTwo[i] != '\0')
	{
		printf("%c", i % 3 ? strTwo[i] : '*');
		++i;
	}
	return 0;
}