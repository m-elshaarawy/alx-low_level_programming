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

	while (i < 10)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar((i * j) + '0');
			if (j != 9)
			_putchar(',');
		}
		_putchar('\n');
		i++;
	}
}
