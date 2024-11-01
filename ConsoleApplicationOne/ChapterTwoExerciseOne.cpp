#include <stdio.h>
#define NAME "Mahler"
#define SUBNAME "Gustav"
int main(void)
{
	printf("%s %s\n",NAME, SUBNAME);
	printf("%s\n%s\n", NAME, SUBNAME);
	printf("%s ",NAME);
	printf("%s\n",SUBNAME);
	return 0;
}