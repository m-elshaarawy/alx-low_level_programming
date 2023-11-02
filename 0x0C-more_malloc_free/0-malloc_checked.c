#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: new size
 * Return: allocated pointer
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
		exit(98);
	return (p);
}
