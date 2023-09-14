#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 *@n:number of rows
 * Return: void
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = i; j > 0; j--)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');
	}

}
