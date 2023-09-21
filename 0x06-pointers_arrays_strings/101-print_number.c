#include "main.h"

/**
 * print_number -  prints an integer.
 * @n: input number
*/

void print_number(int n)
{
	unsigned int N = n;

	if (n < 0)
	{
		N *= -1;
		_putchar('-');
	}
	if ((N / 10) != 0)
		print_number((N / 10));

	_putchar((N % 10) + '0');
}
