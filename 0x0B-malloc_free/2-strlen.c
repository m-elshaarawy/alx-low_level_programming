#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: array of char
 * Return: length
*/

int _strlen(char *s)
{
	int i;

	if (s == 0)
		return (0);

	for (i = 0; s[i]; i++)
	{}
	return (i);
}
