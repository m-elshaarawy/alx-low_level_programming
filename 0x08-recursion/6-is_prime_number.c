#include "main.h"

/**
 * prime - helper function
 * @n: input number
 * @x: integer
 * Return: int
*/
int prime(int n, int x)
{
	if (n <= 1)
		return (0);
	else if (x >= n)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return (prime(n, x + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * , otherwise return 0
 * @n:input number
 * Return: 0 or 1
*/

int is_prime_number(int n)
{
	return (prime(n, 2));
}
