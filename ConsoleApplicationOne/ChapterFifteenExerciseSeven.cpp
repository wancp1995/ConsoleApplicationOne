#include <stdio.h>
#define ID_MASK			0xFF
#define SIZE_MASK		0x7F00
#define ALIGN_MASK		0x18000
#define BOLD_MASK		0x20000
#define ITALIC_MASK		0x40000
#define UNDER_MASK		0x80000
unsigned int font_mode = 0;
const char align[][8] = { "left", "center", "right" };
const char on_off[][4] = { "off", "on" };
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
	int id = font_mode & ID_MASK;
	int size = (font_mode & SIZE_MASK) >> 8;
	int alignNum = (font_mode & ALIGN_MASK) >> 15;
	int bold = (font_mode & BOLD_MASK) >> 17;
	int italic = (font_mode & ITALIC_MASK) >> 18;
	int underline = (font_mode & UNDER_MASK) >> 19;
	printf("ID	SIZE	ALIGN	B	I	U\n");
	printf("%-8d%-8d%-8s%-8s%-8s%-8s\n", id, size, align[alignNum],
		on_off[bold], on_off[italic], on_off[underline]);
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
	font_mode &= ~ID_MASK;
	font_mode |= n;
}
void change_size()
{
	unsigned int n;
	printf("Enter font size (0-127):");
	scanf_s("%u", &n);
	while (getchar() != '\n')
		continue;
	font_mode &= ~SIZE_MASK;
	font_mode |= n << 8;
}
void change_align()
{
	char ch;
	printf("Select alignment:\nl) left		c) center		r) right\n");
	scanf_s("%c", &ch);
	while (getchar() != '\n')
		continue;
	font_mode &= (~ALIGN_MASK);
	if (ch == 'l') font_mode |= (0 << 15);
	if (ch == 'c') font_mode |= (1 << 15);
	if (ch == 'r') font_mode |= (2 << 15);
}
void change_others(char ch)
{
	if (ch == 'b')
	{
		font_mode ^= BOLD_MASK;
	}
	if (ch == 'i')
	{
		font_mode ^= ITALIC_MASK;	
	}
	if (ch == 'u')
	{
		font_mode ^= UNDER_MASK;
	}
}