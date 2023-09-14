#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 *@n:number of rows
 * Return: void
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (i = n; i > 0; i--)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');
	}

}
