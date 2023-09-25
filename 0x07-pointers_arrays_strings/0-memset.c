#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s:input string
 * @b:input char
 * @n:input number
 * Return: arr of chars
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
