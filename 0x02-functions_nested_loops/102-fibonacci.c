#include "main.h"

/**
* main - Entry point
*
* Description: print fibonacci
*
* Return: 0
*/

int main(void)
{
	unsigned long num1 = 1, num2 = 2, num3 = 0, i = 0;

	printf("%lu, %lu, ", num1, num2);

	for (i = 0; i < 48; i++)
	{
		num3 = num1 + num2;

		printf("%lu", num3);
		num1 = num2;
		num2 = num3;
		if (i != 47)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
