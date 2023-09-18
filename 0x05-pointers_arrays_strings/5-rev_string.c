#include "main.h"

/**
 * rev_string -  reverses a string
 * @s: string input
*/

void rev_string(char *s)
{
	int i = 0, l = 0;
	char temp;

	while (s[l])
		l++;
	for (i = 0; i < l / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
