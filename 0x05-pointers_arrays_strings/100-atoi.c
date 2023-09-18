#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: input string
 * Return: int
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
			sign = -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else
			break;
		s++;
	}
	return (num * sign);
}
