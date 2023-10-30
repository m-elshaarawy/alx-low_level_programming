
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: arr1
 * @s2: aee2
 * Return: *arr
*/

char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i = 0;
	char *x;

	if (s1 == 0)
		s1 = "\0";

	if (s2 == 0)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	x = (char *) malloc((size1 + size2) + 1);

	if (x == 0)
		return (0);

	for (i = 0; i <= (size1 + size2); i++)
	{
		if (i < size1)
			x[i] = s1[i];
		else
			x[i] = s2[i - size1];
	}

	return (x);
}

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
