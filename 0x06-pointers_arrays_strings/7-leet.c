#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @str: input string
 * Return: string
*/

char *leet(char *str)
{
	char key[] = {'a', 'e', 'o', 't', 'l'};
	char value[] = {4, 3, 0, 7, 1};
	int size = sizeof(key) / sizeof(char);
	int i = 0;

	while (*str)
	{
		for (i = 0; i < size; i++)
		{
			if (*str == key[i] || (*str - 32) == key[i])
			{
				*str = value[i] + '0';
			}
		}
		str++;
	}
	return (str);
}
