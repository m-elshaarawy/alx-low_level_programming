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
		for (j = 0; j < 10; j++)
		{
			t = i * j;
			if (t > 9)
			{
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
			}
			else
			{
				_putchar((t) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}
