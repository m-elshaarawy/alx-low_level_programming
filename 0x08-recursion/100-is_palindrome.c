#include "main.h"

/**
 * _strlen_recursion -  returns the length of a string
 * @s: string
 * Return: length
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len = _strlen_recursion(s + 1) + 1;
	}
	return (len);
}

/**
 * Is_palindrome - helper function
 * @start: start index
 * @end: end index
 * @str: string
 * Return: 0 or 1
*/

int Is_palindrome(char str[], int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (str[start] == str[end])
	{
		return (Is_Palindrome(str, start + 1, end - 1));
	}

	return (0);
}


/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	int end = _strlen_recursion(s);

	return (Is_palindrome(s, 0, end - 1));
}
