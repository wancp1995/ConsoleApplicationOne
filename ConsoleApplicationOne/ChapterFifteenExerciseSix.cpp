#include <stdio.h>
struct font {
	unsigned int id			: 8;
	unsigned int size		: 7;
	unsigned int align		: 2;
	unsigned int bold		: 1;
	unsigned int italic		: 1;
	unsigned int underline	: 1;
};
struct font font_mode = {1, 12, 0, 0, 0, 0};
const char align[][8] = {"left", "center", "right"};
const char on_off[][4] = {"off", "on"};
void show_meu();
void change_font();
void change_size();
void change_align();
void change_others(char ch);
int main()
{
	char selected;
	show_meu();
	scanf_s("%c", &selected);
	while (selected != 'q')
	{
		while (getchar() != '\n')
			continue;
		switch (selected)
		{
		case 'f':
			change_font();
			break;
		case 's':
			change_size();
			break;
		case 'a':
			change_align();
			break;
		default:
			change_others(selected);
			break;
		}
		show_meu();
		scanf_s("%c", &selected);
	}
	puts("Bye!");
	return 0;
}
void show_meu()
{
	printf("ID	SIZE	ALIGN	B	I	U\n");
	printf("%-8d%-8d%-8s%-8s%-8s%-8s\n", font_mode.id, font_mode.size, align[font_mode.align],
		on_off[font_mode.bold], on_off[font_mode.italic], on_off[font_mode.underline]);
	printf("f) change font		s) change size		a) change alignment\n");
	printf("b) toggle bold		i) toggle italic	u) toggle underline\n");
	printf("q) quit\n");
}
void change_font()
{
	unsigned int n;
	printf("Enter font id (0-255):");
	scanf_s("%u", &n);
	while (getchar() != '\n')
		continue;
	font_mode.id = n;
}
void change_size()
{
	unsigned int n;
	printf("Enter font size (0-127):");
	scanf_s("%u", &n);
	while (getchar() != '\n')
		continue;
	font_mode.size = n;
}
void change_align()
{
	char ch;
	printf("Select alignment:\nl) left		c) center		r) right\n");
	scanf_s("%c", &ch);
	while (getchar() != '\n')
		continue;
	if (ch == 'l') font_mode.align = 0;
	if (ch == 'c') font_mode.align = 1;
	if (ch == 'r') font_mode.align = 2;
}
void change_others(char ch)
{
	if (ch == 'b')
		font_mode.bold = !font_mode.bold;
	if (ch == 'i')
		font_mode.italic = !font_mode.italic;
	if (ch == 'u')
		font_mode.underline = !font_mode.underline;
}