#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: arr of char
 * Return: pointer to char
*/

char *_strdup(char *str)
{
	int i = 0, s = 0;
	char *x;

	if (str == 0)
		return (0);

	for (s = 0 ; str[s] ; s++)
	;

	x = (char *) malloc(s + 1);

	if (x == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < s ; i++)
			x[i] = str[i];
	}
	return (x);
}
