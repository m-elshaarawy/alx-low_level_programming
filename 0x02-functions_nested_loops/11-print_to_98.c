#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 *  followed by a new line.
 * @n:number to start from
*/

void print_to_98(int n)
{
	int i = 0;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
	}
	_putchar('\n');

}
