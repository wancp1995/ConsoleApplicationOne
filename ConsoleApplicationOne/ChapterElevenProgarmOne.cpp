#include <stdio.h>
#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81
int main(void)
{
	char words[MAXLENGTH] = "I am a string in an array.";
	const char* ptOne = "Something is pointing at me.";
	puts(MSG);
	puts(words);
	puts(ptOne);
	words[8] = 'p';
	puts(words);
	return 0;
}