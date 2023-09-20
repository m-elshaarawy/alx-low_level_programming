#include "main.h"

/**
 * string_toupper -  changes all lowercase letters of a string to uppercase
 * @str: input string
 * Return: string
*/

char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i] ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
