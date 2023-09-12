#include "main.h"

/**
 * times_table - time
 * Description: prints the 9 times table, starting with 0.
 *
*/

void times_table(void)
{
	int i = 0;
	int j = 0;
	int t = 0;

	while (i < 10)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
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
