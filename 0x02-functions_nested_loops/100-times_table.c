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
/* If n is greater than 15 or less than 0 */

	if (n > 15 || n < 0)
		return;

	while (i <= n)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');

			t = i * j;

			if (t <= 9)
			{
				_putchar(' ');
			}
			if (t <= 99)
			{
				_putchar(' ');
			}
			if (t >= 100)
			{
				_putchar((t / 100) + '0');
				_putchar((t / 10) % 10 + '0');
			} else if (t <= 99 && t >= 10)
			_putchar((t / 10) + '0');
			_putchar((t % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
