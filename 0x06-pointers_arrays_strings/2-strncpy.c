#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to char
 * @src: pointer to char
 * @n: input int
 * Return: pointer to char
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;


	for (i = 0 ; src[i] && i < n ; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
