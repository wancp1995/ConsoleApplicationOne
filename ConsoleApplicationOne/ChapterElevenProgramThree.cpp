#define MSG "I'm special"
#include <stdio.h>
int main(void)
{
	char ar[100] = MSG;
	const char* pt = MSG;
	printf("address of \"I'm sprcial\": %p\n", "I'm special");
	printf("address ar: %p\n", ar);
	printf("address pt: %p\n", pt);
	printf("address of MSG: %p\n", MSG);
	printf("address of \"I'm sprcial\": %p\n", "I'm special");
	return 0;
}