#include "main.h"

/**
* main - Entry point
*
* Description: list  the natural numbers
*
* Return: 0
*/

int main(void)
{
	int sum = 0, i = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
