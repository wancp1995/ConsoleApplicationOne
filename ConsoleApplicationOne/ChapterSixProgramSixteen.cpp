#include <stdio.h>
int main(void)
{
	const int secret_code = 13;
	int code_entered;
	printf("To enter the triskaidekaphob therapy club,\n");
	printf("please enter the secret code number: ");
	scanf_s("%d", &code_entered);
	while (code_entered != secret_code)
	{
		printf("To enter the triskaidekaphob therapy club,\n");
		printf("please enter the secret code number: ");
		scanf_s("%d", &code_entered);
	}
	printf("Congratulations! You are cured!\n");
	return 0;
}