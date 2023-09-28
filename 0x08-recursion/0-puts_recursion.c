#include "main.h"

/**
 * _puts_recursion -that prints a string, followed by a new line
 * @s: string
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return ('\n');
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
