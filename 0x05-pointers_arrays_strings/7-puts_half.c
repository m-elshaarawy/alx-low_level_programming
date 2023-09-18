#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string input
*/

void puts_half(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	for (i /= 2; str[i] ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
