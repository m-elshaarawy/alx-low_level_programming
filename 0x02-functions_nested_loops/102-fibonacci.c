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

	for (i = 0; i < 50; i++)
	{
		num3 = num1 + num2;

		printf("%lu", num3);
		num1 = num2;
		num2 = num3;
		if (i != 49)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
