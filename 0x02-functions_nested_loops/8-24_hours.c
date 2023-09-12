#include "main.h"

/**
 * jack_bauer - time
 * Description:prints every minute of the day of Jack Bauer,
 *  starting from 00:00 to 23:59
*/

void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	while (i < 24)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		i++;
	}
}
