#include "main.h"

/**
 * _isalpha - checks if care is in lowercase
 *
 * @c : the char that we check
 * Return: 1 if c is lowercase 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
