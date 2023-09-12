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
			_putchar(n + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar(n + '0');
		}
	}


	_putchar('\n');

}
