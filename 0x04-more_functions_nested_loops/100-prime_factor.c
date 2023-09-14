#include "main.h"
/**
 * _squrt - calculate square root
 * @a: input num
 * Return: squarte num
*/

double _squrt(double a)
 {

	double i = 0;
	double j = a / 2;

	while (j != i)
	{
	i = j;
	j = (a / i + i) / 2;
	}

	return (j);

}

/**
 * largest_prime_factor - calculate largest_prime_factor
 * @n: input num
*/

void largest_prime_factor(long int n)
{
	int prime, largest;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	for (prime = 3; prime <= _squrt(n); prime += 2)
	{
		while (n % prime == 0)
		{
			n /= prime;
			largest = prime;
		}
	}

	if (n > 2)
		largest = n;

	printf("%d\n", largest);
}

/**
 * main - entry point
 * Return:0
*/

int main(void)
{
	largest_prime_factor(612852475143);
	return (0);
}
