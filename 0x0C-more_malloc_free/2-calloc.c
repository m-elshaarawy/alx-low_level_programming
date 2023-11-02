#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in an arry
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	char *t;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = mallo(nmemb * sizeof(int));
	t = p;

	if (p == NULL)
		return (NULL);

	while ((nmemb * sizeof(int))--)
	{
		*p++ = 0;
	}

	return (t);
}
