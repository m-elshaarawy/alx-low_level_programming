#include "main.h"

/**
 * _strcmp - copies a string
 * @s1: pointer to char
 * @s2: pointer to char
 * Return: (0) if equal ,
 * (>0) if s1 > s2 ,
 * (0<) if s1 < s2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			i = ((int)*s1 - '0') - ((int)*s2 - '0');
			break;
		}
		s1++;
		s2++;
	}
	return (i);
}
