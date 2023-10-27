#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s:input string
 * @accept: input string
 * Return: pointer
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;
	char *p;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
