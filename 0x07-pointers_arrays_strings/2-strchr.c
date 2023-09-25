#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: input string
 * @c: input char
 * Return: pointer to char
*/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; s[i] ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
