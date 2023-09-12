#include "main.h"

/**
 * print_alphabet_x10 - use _putchar to print alphabet
 *
*/

void print_alphabet_x10(void)
{
	int c = 0;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}

}
