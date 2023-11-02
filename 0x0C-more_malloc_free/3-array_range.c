#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: min number
 * @max: max number
 * Return: Pionter
 */

int *array_range(int min, int max)
{
	int *p;
	int size = 0, i = 0;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = min++;

	return (p);
}
