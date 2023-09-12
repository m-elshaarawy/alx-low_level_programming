#include "main.h"

/**
 * print_alphabet - use _putchar to print alphabet
 *
*/

void print_alphabet(void)
{
	int c = 0;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
