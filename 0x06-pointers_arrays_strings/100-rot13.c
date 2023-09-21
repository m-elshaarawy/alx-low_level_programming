#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: string
*/

char *rot13(char *s)
{
	char Input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char Output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *p = s;
	int i = 0;

		while (*s)
		{
			for (i = 0; i < 52; i++)
			{
				if (*s == Input[i])
				{
					*s = Output[i];
					break;
				}
			}
			s++;
		}

	return (p);
}
