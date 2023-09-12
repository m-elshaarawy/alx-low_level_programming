#include "main.h"

/**
 * print_times_table - time
 * Description: prints the n times table, starting with 0.
 *@n:dimentions
*/

void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int t = 0;

	while (i < n)
	{
		_putchar('0');
		for (j = 1; j < n; j++)
		{
			_putchar(',');
			_putchar(' ');

			t = i * j;

			if (t <= 9)
			{
				_putchar(' ');

			}
			else
			{
				_putchar((t / 10) + '0');

			}
			_putchar((t % 10) + '0');

		}
		_putchar('\n');
		i++;
	}
}
