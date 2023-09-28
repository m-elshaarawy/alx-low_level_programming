#include "main.h"

/**
 * square - helper function
 * @n: input number
 * @x: integer
 * Return: int
*/

int square(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (square(n, x + 1));
	else
		return (-1);
}


/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: input number
 * Return: int
*/

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
