#include "main.h"

/**
 * _memcpy - fills memory with a constant byte
 * @dest:input string
 * @src:input string
 * @n:input number
 * Return: pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
