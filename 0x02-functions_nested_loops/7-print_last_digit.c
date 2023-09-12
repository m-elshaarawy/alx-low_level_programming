#include "main.h"

/**
* print_last_digit - return last digit of an integer
*
* Return: lst digit
* @n: the number that we check
*/


int print_last_digit(int n)
{
	int ld = 0;

	if (n < 0)
	{
		ld = -1 * (n % 10);
	}
	else
	{
		ld = n % 10;
	}
	_putchar(ld + '0');
	return (ld);
}
