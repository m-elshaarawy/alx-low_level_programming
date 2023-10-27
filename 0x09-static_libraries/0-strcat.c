#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 * Return: pointer to char
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, l = 0;

	while (dest[l])
		l++;
	for (i = 0 ; src[i] ; i++)
	{
		dest[l++] = src[i];
	}
	dest[l] = '\0';
	return (dest);
}
