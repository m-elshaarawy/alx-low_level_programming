#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: input string
 * Return: number
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
