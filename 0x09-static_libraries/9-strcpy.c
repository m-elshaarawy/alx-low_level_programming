#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src,
 *  including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: input arr
 * @src: input arr
 * Return: arr
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
