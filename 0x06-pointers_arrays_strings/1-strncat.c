#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 * @n: input int
 * Return: pointer to char
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, l = 0;

	while (dest[l])
		l++;
	for (i = 0 ; src[i] && i < n ; i++)
	{
		dest[l++] = src[i];
	}
	dest[l] = '\0';
	return (dest);
}
