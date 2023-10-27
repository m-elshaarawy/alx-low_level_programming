#include "main.h"

/**
 * _abs - return the absolute of an integer
 *
 * Return: abs number
 * @n: the number that we check
*/

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
