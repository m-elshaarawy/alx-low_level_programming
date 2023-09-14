#include "main.h"

/**
 * print_line -  draws a straight line in the terminal
 *@n:line type
 * Return: void
*/

void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		_putchar(n);
	}
		_putchar('\n');
}
