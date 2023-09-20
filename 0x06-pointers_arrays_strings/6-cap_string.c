#include "main.h"

/**
 * isLower - check if c is lowercase
 * @c: input char
 * Return: 1 or 0
*/

int isLower(char c)
{
	return (c >= 'a' && c <= 'z');
}


/**
 * isDelimiter - ckeck for delimiters
 * space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 * @c: input char
 * Return: 1 or 0
*/

int isDelimiter(char c)
{
	char del[] = " \t\n,;.!?\"(){}";
	int i = 0;

	for (i = 0; i < 13 ; i++)
	{
		if (c == del[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string -  capitalizes all words of a string
 * @str: input string
 * Return: string
*/

char *cap_string(char *str)
{
	int i = 0, flag = 1;

	for (i = 0; str[i] ; i++)
	{
		if (isDelimiter(str[i]))
			flag = 1;
		else if (isLower(str[i]) && flag == 1)
		{
			str[i] -= 32;
			flag = 0;
		}
		else
			flag = 0;
	}
	return (str);
}
