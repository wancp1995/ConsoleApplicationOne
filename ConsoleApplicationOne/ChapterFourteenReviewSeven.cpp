#include <stdio.h>
void printBem(const struct bem* pb);
struct name {
	char first[20];
	char last[20];
};
struct bem {
	int limbs;
	struct name title;
	char type[30];
};
struct bem* pb;
struct bem deb = {
	6,
	{ "Berbnazel", "Gwolkapwolk"},
	"Arcturan"
};
int main(void)
{
	pb = &deb;
	printf("%d\n", deb.limbs);
	printf("%s\n", pb->type);
	printf("%s\n", pb->type + 2);

	printf("%s\n", deb.title.last);
	printf("%s\n", pb->title.last);

	printBem(pb);
	return 0;
}
void printBem(const struct bem * pb)
{
	printf("%s %s is a %d-limed %s\n", pb->title.first, pb->title.last, pb->limbs, pb->type);
}