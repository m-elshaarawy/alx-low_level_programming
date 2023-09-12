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
	unsigned long num1 = 0, num2 = 1, num3 = 0, sum = 0, i = 0;

	for (i = 0; i < 50; i++)
	{
		num3 = num1 + num2;

		if (num3 > 4000000)
			break;
		if (num3 % 2 == 0)
			sum += num3;
		num1 = num2;
		num2 = num3;

	}
	printf("%lu ", sum);
	return (0);
}
