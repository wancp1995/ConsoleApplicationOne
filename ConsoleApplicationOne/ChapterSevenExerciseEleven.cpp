#include <stdio.h>
#define PRICE_ARTI 2.05
#define PRICE_BEET 1.15
#define PRICE_CARROT 1.05
#define DISCOUNT 0.05
void showMenu();
float getWeight();
int main(void)
{
	float weightArti = 0;
	float weightBeet = 0;
	float weightCarrot = 0;
	char selected;
	float weight, amount, rebate, freight, total;
	do
	{
		showMenu();
		scanf_s("%c", &selected);
		switch (selected)
		{
		case 'a':
			weightArti += getWeight();
			break;
		case 'b':
			weightBeet += getWeight();
			break;
		case 'c':
			weightCarrot += getWeight();
			break;
		case 'q':
			break;
		default:
			printf("Errot input, retry!\n");
			break;
		}
	} while (selected != 'q');
	amount = weightArti * PRICE_ARTI + weightBeet * PRICE_BEET + weightCarrot * PRICE_CARROT;
	weight = weightArti + weightBeet + weightCarrot;
	if (amount >= 100)
		rebate = amount * DISCOUNT;
	else
		rebate = 0;
	if (weight <= 5)
		freight = 6.5;
	else if (weight > 5 && weight <= 20)
		freight = 14;
	else
		freight = 14 + (weight - 20) * 0.5;
	total = amount + freight - rebate;
	printf("The price of vegetable:\nartichoke %g$/pound, beet %g$/pound, carror %g$/pound.\n", PRICE_ARTI, PRICE_BEET, PRICE_CARROT);
	printf("You order %g pound artichoke, %g pound beet, %g pound carrot.\n", weightArti, weightBeet, weightCarrot);
	printf("You total order %g pounds, discount %g$, amount %g$, freight %g$, total %g$\n", weight, rebate, amount, freight, total);
	printf("Done!\n");
	return 0;
}
void showMenu()
{
	printf("**********************************************************\n");
	printf("Enter the char corresponding to the desired vegetable.\n");
	printf("a) artichoke				b) beet\n");
	printf("c) carrot					d) quit & checkout\n");
	printf("**********************************************************\n");
	printf("Please input the vegetable you want to buy(a, b, c or q for quit):");
}
float getWeight()
{
	float weight;
	printf("Please input how many pounds you buy:");
	scanf_s("%f", &weight);
	printf("Ok, add %g pounds to cart.\n", weight);
	getchar();
	return weight;
}