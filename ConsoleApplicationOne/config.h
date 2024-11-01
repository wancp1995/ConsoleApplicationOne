#pragma once
#ifndef NAMES_H_
#define NAMES_H_
#define LENGTH 1000
struct names_st
{
	char first[LENGTH];
	char last[LENGTH];
};
typedef struct names_st names;
char* s_gets(char* st, int n);
#endif // !NAMES_H_